// #include <sys/stat.h>
//
// static int _file_exists(const char *file_name) {
//   struct stat file_stat;
//   return ((stat(file_name, &file_stat) == 0) ? 1 : 0);
// }

use std::fs::metadata;

fn file_exists(file_name: &str) -> i32 {
    match metadata(file_name) {
        Ok(_) => 1,
        Err(_) => 0,
    }
}
