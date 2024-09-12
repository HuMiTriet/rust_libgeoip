#[cfg(test)]
mod tests {
    use lib_geoip_rust::geoip_setup_custom_directory;

    #[test]
    fn test() {
        geoip_setup_custom_directory(String::from("hello world"));
    }
}
