use geoip_h::GeoIPDBTypes;
use lazy_static::lazy_static;
mod geoip_h;

use std::{sync::Mutex, usize};

const NUM_DB_TYPES: usize = 33 + 1;

lazy_static! {
    static ref CUSTOM_DIRECTORY: Mutex<Option<String>> = Mutex::new(None);
    static ref GEOIP_SETUP_FILENAME: Mutex<Option<[String; NUM_DB_TYPES]>> = Mutex::new(None);
}

pub fn geoip_setup_custom_directory(dir: String) {
    let mut custom_directory = CUSTOM_DIRECTORY.lock().unwrap();
    *custom_directory = Some(dir);
}

pub fn _geo_ip_setup_dbfilename() {
    let geo_ipdbfile_name = GEOIP_SETUP_FILENAME.lock().unwrap().take();
    if geo_ipdbfile_name.is_none() {
        geo_ipdbfile_name.unwrap()[GeoIPDBTypes::GEOIP_COUNTRY_EDITION as usize] =
            "das".to_string();
    }
}
