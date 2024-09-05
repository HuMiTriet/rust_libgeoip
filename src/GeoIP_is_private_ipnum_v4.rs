// int GeoIP_is_private_ipnum_v4(unsigned long ipnum) {
// return ((ipnum >= 167772160U && ipnum <= 184549375U) ||
//         (ipnum >= 2851995648U && ipnum <= 2852061183U) ||
//         (ipnum >= 2886729728U && ipnum <= 2887778303U) ||
//         (ipnum >= 3232235520U && ipnum <= 3232301055U) ||
//         (ipnum >= 2130706432U && ipnum <= 2147483647U))
//            ? 1
//            : 0;
// }

fn geoip_is_private_ipnum_v4(ipnum: u32) -> i32 {
    match (ipnum >= 167772160 && ipnum <= 184549375)
        || (ipnum >= 2851995648 && ipnum <= 2852061183)
        || (ipnum >= 2886729728 && ipnum <= 2887778303)
        || (ipnum >= 3232235520 && ipnum <= 3232301055)
        || (ipnum >= 2130706432 && ipnum <= 2147483647)
    {
        true => 1,
        false => 0,
    }
}
