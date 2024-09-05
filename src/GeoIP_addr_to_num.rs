// unsigned long GeoIP_addr_to_num(const char *addr) {
//   unsigned int c, octet, t;
//   unsigned long ipnum;
//   int i = 3;
//
//   octet = ipnum = 0;
//   while ((c = *addr++)) {
//     if (c == '.') {
//       if (octet > 255)
//         return 0;
//       ipnum <<= 8;
//       ipnum += octet;
//       i--;
//       octet = 0;
//     } else {
//       t = octet;
//       octet <<= 3;
//       octet += t;
//       octet += t;
//       c -= '0';
//       if (c > 9)
//         return 0;
//       octet += c;
//     }
//   }
//   if ((octet > 255) || (i != 0))
//     return 0;
//   ipnum <<= 8;
//   return ipnum + octet;
// }

fn geoip_addr_to_num(addr: &str) -> Option<u32> {
    let mut ipnum: u32 = 0;
    let mut octet: u32 = 0;
    let mut i: i32 = 3;

    for c in addr.chars() {
        if c == '.' {
            if octet > 255 {
                return None;
            }
            ipnum = (ipnum << 8) + octet;
            i -= 1;
            octet = 0;
        } else if c.is_digit(10) {
            let t = octet;
            octet = (octet << 3) + (t << 1) + (c.to_digit(10).unwrap());
        } else {
            return None;
        }
    }

    if octet > 255 || i != 0 {
        return None;
    }

    Some((ipnum << 8) + octet)
}
