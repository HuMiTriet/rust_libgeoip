#!/bin/env bash
cargo build
cbindgen --crate lib_geoip_rust --lang c --output ./c_code/caller.h
gcc -Wall -g ./c_code/caller.c -I . -Ltarget/debug/ -l:libgeopip_rust.so -o caller
LD_LIBRARY_PATH=target/debug ./caller
