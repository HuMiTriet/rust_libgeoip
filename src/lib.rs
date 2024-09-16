#![allow(non_camel_case_types)]
#![allow(non_snake_case)]
#![allow(non_upper_case_globals)]

use geoip_h::GeoIPDBTypes;
use std::{
    cell::OnceCell,
    env,
    ffi::{c_char, c_int, CString},
};
mod geoip_h;

const NUM_DB_TYPES: usize = 38 + 1;

const GeoIPDBFileName: OnceCell<[String; NUM_DB_TYPES]> = OnceCell::new();
const GeoIP_custom_directory: OnceCell<String> = OnceCell::new();

const GeoIPDBDescription: [Option<&'static str>; NUM_DB_TYPES] = [
    None,
    Some("GeoIP Country Edition"),
    Some("GeoIP City Edition, Rev 1"),
    Some("GeoIP Region Edition, Rev 1"),
    Some("GeoIP ISP Edition"),
    Some("GeoIP Organization Edition"),
    Some("GeoIP City Edition, Rev 0"),
    Some("GeoIP Region Edition, Rev 0"),
    Some("GeoIP Proxy Edition"),
    Some("GeoIP ASNum Edition"),
    Some("GeoIP Netspeed Edition"),
    Some("GeoIP Domain Name Edition"),
    Some("GeoIP Country V6 Edition"),
    Some("GeoIP LocationID ASCII Edition"),
    Some("GeoIP Accuracy Radius Edition"),
    None,
    None,
    Some("GeoIP Large Country Edition"),
    Some("GeoIP Large Country V6 Edition"),
    None,
    Some("GeoIP CCM Edition"),
    Some("GeoIP ASNum V6 Edition"),
    Some("GeoIP ISP V6 Edition"),
    Some("GeoIP Organization V6 Edition"),
    Some("GeoIP Domain Name V6 Edition"),
    Some("GeoIP LocationID ASCII V6 Edition"),
    Some("GeoIP Registrar Edition"),
    Some("GeoIP Registrar V6 Edition"),
    Some("GeoIP UserType Edition"),
    Some("GeoIP UserType V6 Edition"),
    Some("GeoIP City Edition V6, Rev 1"),
    Some("GeoIP City Edition V6, Rev 0"),
    Some("GeoIP Netspeed Edition, Rev 1"),
    Some("GeoIP Netspeed Edition V6, Rev1"),
    Some("GeoIP Country Confidence Edition"),
    Some("GeoIP City Confidence Edition"),
    Some("GeoIP Region Confidence Edition"),
    Some("GeoIP Postal Confidence Edition"),
    Some("GeoIP Accuracy Radius Edition V6"),
];

pub fn GeoIP_setup_custom_directory(dir: String) {
    GeoIP_custom_directory.get_or_init(|| dir);
}

fn get_db_description(dbtype: i32) -> String {
    if dbtype as usize >= NUM_DB_TYPES || dbtype < 0 {
        return "Unknown".to_string();
    }

    GeoIPDBDescription
        .get(dbtype as usize)
        .unwrap()
        .unwrap_or("Unknown")
        .to_string()
}

fn _geo_ip_full_path_to(file_name: &str) -> String {
    let path;
    if let Some(custom_dir) = GeoIP_custom_directory.get() {
        if custom_dir.chars().last().unwrap() != '/' {
            path = format!("{}/{}", custom_dir, file_name);
        } else {
            path = format!("{}{}", custom_dir, file_name);
        }
    } else {
        let geoip_data_dir = env::var("GEOIPDATADIR").unwrap_or_else(|_| "~/GeoIP".to_string());

        path = format!("{}/{}", geoip_data_dir, file_name);
    }
    path
}

pub fn _geo_ip_setup_dbfilename() {
    GeoIPDBFileName.get_or_init(|| {
        const EMPTY_STRING: String = String::new();
        let mut result: [String; NUM_DB_TYPES] = [EMPTY_STRING; NUM_DB_TYPES];

        result[GeoIPDBTypes::GEOIP_COUNTRY_EDITION as usize] = _geo_ip_full_path_to("GeoIP.dat");
        result[GeoIPDBTypes::GEOIP_REGION_EDITION_REV0 as usize] =
            _geo_ip_full_path_to("GeoIPRegion.dat");
        result[GeoIPDBTypes::GEOIP_REGION_EDITION_REV1 as usize] =
            _geo_ip_full_path_to("GeoIPRegion.dat");
        result[GeoIPDBTypes::GEOIP_CITY_EDITION_REV0 as usize] =
            _geo_ip_full_path_to("GeoIPCity.dat");
        result[GeoIPDBTypes::GEOIP_CITY_EDITION_REV1 as usize] =
            _geo_ip_full_path_to("GeoIPCity.dat");
        result[GeoIPDBTypes::GEOIP_ISP_EDITION as usize] = _geo_ip_full_path_to("GeoIPISP.dat");
        result[GeoIPDBTypes::GEOIP_ORG_EDITION as usize] = _geo_ip_full_path_to("GeoIPOrg.dat");
        result[GeoIPDBTypes::GEOIP_PROXY_EDITION as usize] = _geo_ip_full_path_to("GeoIPProxy.dat");
        result[GeoIPDBTypes::GEOIP_ASNUM_EDITION as usize] = _geo_ip_full_path_to("GeoIPASNum.dat");
        result[GeoIPDBTypes::GEOIP_NETSPEED_EDITION as usize] =
            _geo_ip_full_path_to("GeoIPNetSpeed.dat");
        result[GeoIPDBTypes::GEOIP_DOMAIN_EDITION as usize] =
            _geo_ip_full_path_to("GeoIPDomain.dat");
        result[GeoIPDBTypes::GEOIP_COUNTRY_EDITION_V6 as usize] =
            _geo_ip_full_path_to("GeoIPv6.dat");
        result[GeoIPDBTypes::GEOIP_LOCATIONA_EDITION as usize] =
            _geo_ip_full_path_to("GeoIPLocA.dat");
        result[GeoIPDBTypes::GEOIP_ACCURACYRADIUS_EDITION as usize] =
            _geo_ip_full_path_to("GeoIPDistance.dat");
        result[GeoIPDBTypes::GEOIP_LARGE_COUNTRY_EDITION as usize] =
            _geo_ip_full_path_to("GeoIP.dat");
        result[GeoIPDBTypes::GEOIP_LARGE_COUNTRY_EDITION_V6 as usize] =
            _geo_ip_full_path_to("GeoIPv6.dat");
        result[GeoIPDBTypes::GEOIP_ASNUM_EDITION_V6 as usize] =
            _geo_ip_full_path_to("GeoIPASNumv6.dat");
        result[GeoIPDBTypes::GEOIP_ISP_EDITION_V6 as usize] =
            _geo_ip_full_path_to("GeoIPISPv6.dat");
        result[GeoIPDBTypes::GEOIP_ORG_EDITION_V6 as usize] =
            _geo_ip_full_path_to("GeoIPOrgv6.dat");
        result[GeoIPDBTypes::GEOIP_DOMAIN_EDITION_V6 as usize] =
            _geo_ip_full_path_to("GeoIPDomainv6.dat");
        result[GeoIPDBTypes::GEOIP_LOCATIONA_EDITION_V6 as usize] =
            _geo_ip_full_path_to("GeoIPLocAv6.dat");
        result[GeoIPDBTypes::GEOIP_REGISTRAR_EDITION as usize] =
            _geo_ip_full_path_to("GeoIPRegistrar.dat");
        result[GeoIPDBTypes::GEOIP_REGISTRAR_EDITION_V6 as usize] =
            _geo_ip_full_path_to("GeoIPRegistrarv6.dat");
        result[GeoIPDBTypes::GEOIP_USERTYPE_EDITION as usize] =
            _geo_ip_full_path_to("GeoIPUserType.dat");
        result[GeoIPDBTypes::GEOIP_USERTYPE_EDITION_V6 as usize] =
            _geo_ip_full_path_to("GeoIPUserTypev6.dat");
        result[GeoIPDBTypes::GEOIP_CITY_EDITION_REV0_V6 as usize] =
            _geo_ip_full_path_to("GeoIPCityv6.dat");
        result[GeoIPDBTypes::GEOIP_CITY_EDITION_REV1_V6 as usize] =
            _geo_ip_full_path_to("GeoIPCityv6.dat");
        result[GeoIPDBTypes::GEOIP_NETSPEED_EDITION_REV1 as usize] =
            _geo_ip_full_path_to("GeoIPNetSpeedCell.dat");
        result[GeoIPDBTypes::GEOIP_NETSPEED_EDITION_REV1_V6 as usize] =
            _geo_ip_full_path_to("GeoIPNetSpeedCellv6.dat");
        result[GeoIPDBTypes::GEOIP_COUNTRYCONF_EDITION as usize] =
            _geo_ip_full_path_to("GeoIPCountryConf.dat");
        result[GeoIPDBTypes::GEOIP_CITYCONF_EDITION as usize] =
            _geo_ip_full_path_to("GeoIPCityConf.dat");
        result[GeoIPDBTypes::GEOIP_REGIONCONF_EDITION as usize] =
            _geo_ip_full_path_to("GeoIPRegionConf.dat");
        result[GeoIPDBTypes::GEOIP_POSTALCONF_EDITION as usize] =
            _geo_ip_full_path_to("GeoIPPostalConf.dat");
        result[GeoIPDBTypes::GEOIP_ACCURACYRADIUS_EDITION_V6 as usize] =
            _geo_ip_full_path_to("GeoIPDistancev6.dat");

        result
    });
}
