// char *_GeoIP_iso_8859_1__utf8(const char *iso) {
//   signed char c; char k; char *p; char *t = (char *)iso;
//   int len = 0;
//   while ((c = *t++)) {
//     if (c < 0)
//       len++;
//   }
//   len += t - iso;
//   t = p = malloc(len);
//
//   if (p) {
//     while ((c = *iso++)) {
//       if (c < 0) {
//         k = 0xc2;
//         if (c >= -64)
//           k++;
//         *t++ = k;
//         c &= ~0x40;
//       }
//       *t++ = c;
//     }
//     *t++ = 0x00; } return p;
// }

fn latin1_to_string(s: &[u8]) -> String {
    s.iter().map(|&c| c as char).collect()
}
