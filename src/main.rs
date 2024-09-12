mod GeoIP_addr_to_num;
mod GeoIP_id_by_code;
mod GeoIP_is_private_ipnum_v4;
mod GeoIP_printf;
mod _file_exist;
mod latin1_to_string;
mod parse_http_proxy;

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

fn main() {
    let callback = |s: &str| {
        println!("Callback received: {}", s);
    };

    geoip_printf!(Some(callback), "Hello, {}!", "world");
}
