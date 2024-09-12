// short int parse_http_proxy(char **proxy_host, int *port) {
//   char *http_proxy;
//   char *port_value;
//
//   if ((http_proxy = getenv("http_proxy"))) {
//
//     if (!strncmp("http://", http_proxy, 7))
//       http_proxy += 7;
//
//     *proxy_host = strdup(http_proxy);
//     if (*proxy_host == NULL)
//       return 0; /* let the other functions deal with the memory error */
//
//     if ((port_value = strchr(*proxy_host, ':'))) {
//       *port_value++ = '\0';
//       *port = atoi(port_value);
//     } else {
//       *port = 80;
//     }
//     return (1);
//   } else {
//     return (0);
//   }
// }

use std::env;

fn parse_http_proxy(mut proxy_host: Option<String>, mut port: Box<i32>) -> i16 {
    if let Ok(mut http_proxy) = env::var("http_proxy") {
        if &http_proxy[..7] != "http://" {
            http_proxy = http_proxy[7..].to_string();
        }

        proxy_host = Some(http_proxy);

        if proxy_host.is_none() {
            return 0;
        }

        if let Some(index) = proxy_host.as_ref().unwrap().find(":") {
            let mut test = proxy_host.unwrap().chars().nth(index).unwrap();
            test = '\0';
            *port = proxy_host.clone().as_mut().unwrap()[index..]
                .parse()
                .unwrap();
        } else {
            *port = 80;
        }

        return 1;
    } else {
        return 0;
    }
}
