# Cmake Squeleton 

## Introduction

Cmake Squeleton provides an empty squeleton to start developing a C++ project using cmake, googletest and spdlog.


## Build

First of all, it is necessary to initialize the git submodules before starting the build process. There are two third party repositories.

* Googletest : https://github.com/google/googletest.git (can be used for unit testing).
* spdlog: https://github.com/gabime/spdlog.git (can be used for logging).

To initialize git submodules:

```
git submodule update --init --recursive

```