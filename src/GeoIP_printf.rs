// void GeoIP_printf(void (*f)(char *), const char *str, ...) {
//   va_list params;
//   char *f_str;
//   int silence;
//   if (f == NULL)
//     return;
//   va_start(params, str);
// #if defined(HAVE_VASPRINTF)
//   silence = vasprintf(&f_str, str, params);
// #elif defined(HAVE_VSNPRINTF)
//   f_str = malloc(4096);
//   if (f_str)
//     silence = vsnprintf(f_str, 4096, str, params);
// #else
//   f_str = malloc(4096);
//   if (f_str)
//     silence = vsprintf(f_str, str, params);
// #endif
//   va_end(params);
//   if (f_str == NULL)
//     return;
//   (*f)(f_str);
//   free(f_str);
// }

macro_rules! geoip_printf {
    ($f:expr, $fmt:expr, $( $args:expr ),* ) => {
        if $f.is_none() {
            return;
        }

        // Format the string with the provided arguments
        let formatted_string = format!($fmt, $( $args ),*);

        // Invoke the closure/function with the formatted string
        $f.as_ref().unwrap()(&formatted_string);
    };
}

// fn main() {
//     let callback = |s: &str| {
//         println!("Callback received: {}", s);
//     };
//
//     geoip_printf!(Some(callback), "Hello, {}!", "world");
// }

// other non working

// use std::ffi::CString;
// use std::fmt::Write;
// use std::os::raw::c_char;
//
// fn geoip_printf<F>(f: Option<F>, format: &str, args: std::fmt::Arguments<'_>)
// where
//     F: FnOnce(&str),
// {
//     if let Some(func) = f {
//         let mut buffer = String::with_capacity(4096);
//         let _ = write!(&mut buffer, "{}", args);
//
//         func(&buffer);
//     }
// }
//
// fn main() {
//     // Example usage
//     let print_func = |s: &str| {
//         println!("{}", s);
//     };
//
//     geoip_printf(Some(print_func), "Hello, {}!", format_args!("world"));
// }
