use lib_geoip_rust::{_geo_ip_setup_dbfilename, geoip_setup_custom_directory};
use std::cell::OnceCell;
use std::sync::Mutex;
use std::{env::args, process};

const INFO_FLAG: OnceCell<i32> = OnceCell::new();

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
            "-i" => {
                INFO_FLAG.get_or_init(|| 1);
            }
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

    // If the user did not set -v set it to 0
    INFO_FLAG.get_or_init(|| 0);

    if hostname.is_none() {
        usage();
        process::exit(1);
    }

    if custom_directory.is_some() {
        geoip_setup_custom_directory(custom_directory.unwrap());
    }

    _geo_ip_setup_dbfilename();
}
