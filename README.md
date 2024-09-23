# Step by step guide:

1) Write a [FFI-safe (Foreign Function Interface)](https://doc.rust-lang.org/nomicon/ffi.html) rust function signature that can be called by C:
```rust
use std::ffi::{c_char, c_int, CString};
pub extern "C" fn get_db_description(dbtype: c_int) -> *const c_char {
    // code
}
```

2) Modify **cargo.toml** to specify this is a shared library:

```toml
[lib]
name       = "geopip_rust"
crate-type = ["cdylib"]      # Creates dynamic lib
# crate-type = ["staticlib"] # Creates static lib``
```

3) Install [cbindgen](https://github.com/mozilla/cbindgen?tab=readme-ov-file) to generate the header file for the c code with this command:
```sh
cargo install --force cbindgen
```
Then call cbindgen to generate the header: 
```sh 
cbindgen --crate lib_geoip_rust --lang c --output ./c_code/caller.h
```

4) build the rust shared library by: cargo build

5) Compile the c code and linking the library: 
```sh
gcc -Wall -g ./c_code/caller.c -I . -Ltarget/debug/ -l:libgeopip_rust.so -o caller
```

6) run the executable

```sh 
LD_LIBRARY_PATH=target/debug ./caller
```
