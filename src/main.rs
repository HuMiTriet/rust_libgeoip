use lazy_static::lazy_static;
use lib_geoip_rust::geoip_setup_custom_directory;
use std::sync::Mutex;
use std::{env::args, process};

lazy_static! {
    static ref INFO_FLAG: Mutex<Option<i32>> = Mutex::new(Some(0));
}

fn usage() {
    eprintln!(
        "Usage: geoiplookup [-d custom_dir] [-f custom_file] [-v] [-i] <ipaddress|hostname>\n"
    )
}

fn main() {
    let mut version_flag = 0;
    let mut hostname: Option<String> = None;
    let mut custom_directory: Option<String> = None;
    let mut custom_file: Option<String> = None;

    if args().len() < 2 {
        usage();
        process::exit(1);
    }

    let mut args_iter = args().into_iter();

    while let Some(arg) = args_iter.next() {
        match arg.as_str() {
            "-v" => version_flag = 1,
            "-i" => *INFO_FLAG.lock().unwrap() = Some(1),
            "-f" => {
                if let Some(file_name) = args_iter.next() {
                    custom_file = Some(file_name);
                }
            }
            "-d" => {
                if let Some(dir_name) = args_iter.next() {
                    custom_directory = Some(dir_name);
                }
            }
            _ => hostname = Some(arg),
        }
    }

    if hostname.is_none() {
        usage();
        process::exit(1);
    }

    if custom_directory.is_some() {
        geoip_setup_custom_directory(custom_directory.unwrap());
    }
}
