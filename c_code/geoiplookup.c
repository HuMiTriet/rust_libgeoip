#include "GeoIP.h"
#include "helper.h"
#include <stdio.h>

int main() {
  GeoIP *gi = GeoIP_open("/home/triet/coding/rust_libgeoip/data/GeoIP.dat",
                         GEOIP_STANDARD | GEOIP_SILENCE);
  printf("C code: File mtime check is: %ld at addr: %p \n", gi->mtime,
         &gi->mtime);

  printf("C code: ext_flag is %d \n", gi->ext_flags);
  printf("C code: fileno helper from rust result: %d \n", get_fileno(gi));

  printf("Using Rust alloc GeoIPTag. Info: %s", GeoIP_database_info(gi));

  return 0;
}
