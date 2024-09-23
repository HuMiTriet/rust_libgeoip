#include "GeoIP.h"
#include "GeoIPCity.h"
#include "GeoIP_internal.h"
#include "helper.h"
#include <stdio.h>

int main() {
  GeoIP *gi = GeoIP_open("/home/pj/coding/geoip-api-c/data/GeoIP.dat",
                         GEOIP_STANDARD | GEOIP_SILENCE);
  printf("C code: File last mtime check is: %p \n", &gi->last_mtime_check);

  int test = get_fileno(gi);

  return 0;
}
