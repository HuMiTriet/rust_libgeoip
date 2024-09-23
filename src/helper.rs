use crate::GeoIP::GeoIPTag;
use std::{ffi::c_int, os::fd::AsRawFd};

#[no_mangle]
extern "C" fn get_fileno(gi: *const GeoIPTag) -> c_int {
    let file = unsafe { &(*gi).GeoIPDatabase };
    if file.is_none() {
        return 0;
    }

    let file_unwrap = match file {
        Some(f) => f,
        None => {
            println!("No file inside pointer");
            return 0;
        }
    };

    return file_unwrap.as_raw_fd();
}
