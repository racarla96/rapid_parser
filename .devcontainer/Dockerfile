# Dev environment for rapid_parser (ANTLR4 + C++17, headless)
#
# Provides:
#  - build-essential / cmake / ninja / git -> CMake + ExternalAntlr4Cpp
#    (clones & builds the ANTLR4 C++ runtime from GitHub on first configure)
#  - default-jre-headless                  -> runs tools/antlr-4.13.1-complete.jar
#
# No X11 / CImg dependencies: this image is purely for lexing/parsing RAPID
# source (.mod / .prg / .sys), not for any graphical output.

FROM ubuntu:24.04

ENV DEBIAN_FRONTEND=noninteractive

RUN apt-get update && apt-get install -y --no-install-recommends \
        build-essential \
        cmake \
        ninja-build \
        git \
        ca-certificates \
        wget \
        gdb \
        default-jre-headless \
    && rm -rf /var/lib/apt/lists/*

# --- Non-root user so VS Code Dev Containers can attach cleanly ---------
# ubuntu:24.04 already ships a non-root "ubuntu" user with UID/GID 1000,
# so we reuse it instead of creating a new one (avoids "GID 1000 already
# exists" errors when groupadd/useradd collide with the image default).
ARG USERNAME=ubuntu

RUN apt-get update && apt-get install -y --no-install-recommends sudo \
    && echo "$USERNAME ALL=(root) NOPASSWD:ALL" > /etc/sudoers.d/$USERNAME \
    && chmod 0440 /etc/sudoers.d/$USERNAME \
    && rm -rf /var/lib/apt/lists/*

USER $USERNAME
WORKDIR /workspace
