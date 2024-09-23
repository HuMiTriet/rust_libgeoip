#include "GeoIP.h"
#include "helper.h"
#include <stdio.h>

int main() {
  GeoIP *gi = GeoIP_open("/home/triet/coding/rust_libgeoip/data/GeoIP.dat",
                         GEOIP_STANDARD | GEOIP_SILENCE);
  printf("C code: File mtime check is: %ld at addr: %p \n", gi->mtime,
         &gi->mtime);

  int test = get_fileno(gi);

  printf("fileno helper from rust result: %d \n", test);

  return 0;
}
