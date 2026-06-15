// Value.hpp
//
// Dynamically-typed runtime value for the RAPID interpreter.
//
// RAPID's atomic types (num, bool, string) map directly onto the
// corresponding C++ types. Records and arrays (jointtarget, robtarget,
// speeddata, tooldata, [1,2,3], [[...],[...]], ...) are all represented
// uniformly as Array: this interpreter does not know RECORD field layouts,
// so components are accessed positionally with {index} (1-based, as in
// RAPID), not by field name (p.trans, p.rot, ...).

#pragma once

#include <cmath>
#include <sstream>
#include <stdexcept>
#include <string>
#include <vector>

namespace rapid {

class Value {
public:
    enum class Kind { Undefined, Num, Bool, String, Array };

    Value() : kind_(Kind::Undefined), num_(0.0), bool_(false) {}

    static Value num(double v) {
        Value r;
        r.kind_ = Kind::Num;
        r.num_ = v;
        return r;
    }
    static Value boolean(bool v) {
        Value r;
        r.kind_ = Kind::Bool;
        r.bool_ = v;
        return r;
    }
    static Value string(std::string v) {
        Value r;
        r.kind_ = Kind::String;
        r.str_ = std::move(v);
        return r;
    }
    static Value array(std::vector<Value> v) {
        Value r;
        r.kind_ = Kind::Array;
        r.array_ = std::move(v);
        return r;
    }
    static Value undefined() { return Value(); }

    Kind kind() const { return kind_; }
    bool isUndefined() const { return kind_ == Kind::Undefined; }
    bool isNum() const { return kind_ == Kind::Num; }
    bool isBool() const { return kind_ == Kind::Bool; }
    bool isString() const { return kind_ == Kind::String; }
    bool isArray() const { return kind_ == Kind::Array; }

    double asNum() const {
        if (kind_ != Kind::Num) throw std::runtime_error("expected num, got " + kindName());
        return num_;
    }
    bool asBool() const {
        if (kind_ != Kind::Bool) throw std::runtime_error("expected bool, got " + kindName());
        return bool_;
    }
    const std::string& asString() const {
        if (kind_ != Kind::String) throw std::runtime_error("expected string, got " + kindName());
        return str_;
    }
    std::vector<Value>& asArray() {
        if (kind_ != Kind::Array) throw std::runtime_error("expected array/record, got " + kindName());
        return array_;
    }
    const std::vector<Value>& asArray() const {
        if (kind_ != Kind::Array) throw std::runtime_error("expected array/record, got " + kindName());
        return array_;
    }

    std::string kindName() const {
        switch (kind_) {
            case Kind::Undefined: return "undefined";
            case Kind::Num: return "num";
            case Kind::Bool: return "bool";
            case Kind::String: return "string";
            case Kind::Array: return "array/record";
        }
        return "?";
    }

    // Human-readable form, used for tracing (TPWrite, Move logging, errors).
    std::string toDisplayString() const {
        switch (kind_) {
            case Kind::Undefined:
                return "<undef>";
            case Kind::Num: {
                std::ostringstream os;
                os << num_;
                return os.str();
            }
            case Kind::Bool:
                return bool_ ? "TRUE" : "FALSE";
            case Kind::String:
                return str_;
            case Kind::Array: {
                std::string out = "[";
                for (size_t i = 0; i < array_.size(); ++i) {
                    if (i) out += ",";
                    out += array_[i].toDisplayString();
                }
                out += "]";
                return out;
            }
        }
        return "";
    }

    // ---- Arithmetic / comparison -----------------------------------------
    // All throw std::runtime_error on type mismatch (RAPID is strongly typed).

    static Value add(const Value& a, const Value& b) {
        if (a.kind_ == Kind::Num && b.kind_ == Kind::Num) return num(a.num_ + b.num_);
        if (a.kind_ == Kind::String && b.kind_ == Kind::String) return string(a.str_ + b.str_);
        throw std::runtime_error("type mismatch in '+' (" + a.kindName() + " + " + b.kindName() + ")");
    }
    static Value sub(const Value& a, const Value& b) {
        return num(requireNum(a, "-") - requireNum(b, "-"));
    }
    static Value mul(const Value& a, const Value& b) {
        return num(requireNum(a, "*") * requireNum(b, "*"));
    }
    static Value div(const Value& a, const Value& b) {
        double db = requireNum(b, "/");
        if (db == 0.0) throw std::runtime_error("division by zero");
        return num(requireNum(a, "/") / db);
    }
    // RAPID 'DIV': integer division (floor)
    static Value intDiv(const Value& a, const Value& b) {
        double db = requireNum(b, "DIV");
        if (db == 0.0) throw std::runtime_error("division by zero (DIV)");
        return num(std::floor(requireNum(a, "DIV") / db));
    }
    // RAPID 'MOD': remainder
    static Value mod(const Value& a, const Value& b) {
        double db = requireNum(b, "MOD");
        if (db == 0.0) throw std::runtime_error("division by zero (MOD)");
        return num(std::fmod(requireNum(a, "MOD"), db));
    }
    static Value neg(const Value& a) {
        return num(-requireNum(a, "unary -"));
    }

    static bool equals(const Value& a, const Value& b) {
        if (a.kind_ != b.kind_) throw std::runtime_error("type mismatch in comparison (" + a.kindName() + " vs " + b.kindName() + ")");
        switch (a.kind_) {
            case Kind::Undefined: return true;
            case Kind::Num: return a.num_ == b.num_;
            case Kind::Bool: return a.bool_ == b.bool_;
            case Kind::String: return a.str_ == b.str_;
            case Kind::Array: {
                if (a.array_.size() != b.array_.size()) return false;
                for (size_t i = 0; i < a.array_.size(); ++i)
                    if (!equals(a.array_[i], b.array_[i])) return false;
                return true;
            }
        }
        return false;
    }
    static bool less(const Value& a, const Value& b) {
        return requireNum(a, "<") < requireNum(b, "<");
    }

private:
    static double requireNum(const Value& v, const char* op) {
        if (v.kind_ != Kind::Num) throw std::runtime_error(std::string("'") + op + "' requires num operands, got " + v.kindName());
        return v.num_;
    }

    Kind kind_;
    double num_;
    bool bool_;
    std::string str_;
    std::vector<Value> array_;
};

} // namespace rapid
