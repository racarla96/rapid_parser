// Environment.hpp
//
// Case-insensitive variable scope for the RAPID interpreter.
// RAPID identifiers are case-insensitive (Counter, counter and COUNTER all
// refer to the same variable), so keys are normalized to lowercase before
// being stored/looked up. Scopes form a parent chain: a routine's local
// scope has the global (module-level) scope as its parent, so PERS/CONST/VAR
// declared at module level are visible (and mutable) from any routine.

#pragma once

#include <algorithm>
#include <cctype>
#include <string>
#include <unordered_map>

#include "Value.hpp"

namespace rapid {

class Environment {
public:
    explicit Environment(Environment* parent = nullptr) : parent_(parent) {}

    // Declares (or re-declares) a variable in THIS scope.
    void declare(const std::string& name, Value value) {
        vars_[normalize(name)] = std::move(value);
    }

    bool existsLocally(const std::string& name) const {
        return vars_.find(normalize(name)) != vars_.end();
    }

    // Looks up a variable, searching outward through parent scopes.
    // Returns nullptr if not found anywhere.
    Value* find(const std::string& name) {
        auto it = vars_.find(normalize(name));
        if (it != vars_.end()) return &it->second;
        if (parent_) return parent_->find(name);
        return nullptr;
    }

    static std::string normalize(const std::string& name) {
        std::string r = name;
        std::transform(r.begin(), r.end(), r.begin(),
                       [](unsigned char c) { return static_cast<char>(std::tolower(c)); });
        return r;
    }

private:
    Environment* parent_;
    std::unordered_map<std::string, Value> vars_;
};

} // namespace rapid
