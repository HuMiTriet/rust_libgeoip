#include <stdarg.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>

#define _SYS_TYPES_H 1

#define _FEATURES_H 1

#define _DEFAULT_SOURCE 1

#define __GLIBC_USE_ISOC23 0

#define __USE_ISOC11 1

#define __USE_ISOC99 1

#define __USE_ISOC95 1

#define __USE_POSIX_IMPLICITLY 1

#define _POSIX_SOURCE 1

#define _POSIX_C_SOURCE 200809

#define __USE_POSIX 1

#define __USE_POSIX2 1

#define __USE_POSIX199309 1

#define __USE_POSIX199506 1

#define __USE_XOPEN2K 1

#define __USE_XOPEN2K8 1

#define _ATFILE_SOURCE 1

#define __WORDSIZE 64

#define __WORDSIZE_TIME64_COMPAT32 1

#define __SYSCALL_WORDSIZE 64

#define __TIMESIZE 64

#define __USE_TIME_BITS64 1

#define __USE_MISC 1

#define __USE_ATFILE 1

#define __USE_FORTIFY_LEVEL 0

#define __GLIBC_USE_DEPRECATED_GETS 0

#define __GLIBC_USE_DEPRECATED_SCANF 0

#define __GLIBC_USE_C23_STRTOL 0

#define _STDC_PREDEF_H 1

#define __STDC_IEC_559__ 1

#define __STDC_IEC_60559_BFP__ 201404

#define __STDC_IEC_559_COMPLEX__ 1

#define __STDC_IEC_60559_COMPLEX__ 201404

#define __STDC_ISO_10646__ 201706

#define __GNU_LIBRARY__ 6

#define __GLIBC__ 2

#define __GLIBC_MINOR__ 40

#define _SYS_CDEFS_H 1

#define __glibc_c99_flexarr_available 1

#define __LDOUBLE_REDIRECTS_TO_FLOAT128_ABI 0

#define __HAVE_GENERIC_SELECTION 1

#define _BITS_TYPES_H 1

#define _BITS_TYPESIZES_H 1

#define __OFF_T_MATCHES_OFF64_T 1

#define __INO_T_MATCHES_INO64_T 1

#define __RLIM_T_MATCHES_RLIM64_T 1

#define __STATFS_MATCHES_STATFS64 1

#define __KERNEL_OLD_TIMEVAL_MATCHES_TIMEVAL64 1

#define __FD_SETSIZE 1024

#define _BITS_TIME64_H 1

#define __clock_t_defined 1

#define __clockid_t_defined 1

#define __time_t_defined 1

#define __timer_t_defined 1

#define _BITS_STDINT_INTN_H 1

#define __BIT_TYPES_DEFINED__ 1

#define _ENDIAN_H 1

#define _BITS_ENDIAN_H 1

#define __LITTLE_ENDIAN 1234

#define __BIG_ENDIAN 4321

#define __PDP_ENDIAN 3412

#define _BITS_ENDIANNESS_H 1

#define __BYTE_ORDER 1234

#define __FLOAT_WORD_ORDER 1234

#define LITTLE_ENDIAN 1234

#define BIG_ENDIAN 4321

#define PDP_ENDIAN 3412

#define BYTE_ORDER 1234

#define _BITS_BYTESWAP_H 1

#define _BITS_UINTN_IDENTITY_H 1

#define _SYS_SELECT_H 1

#define __sigset_t_defined 1

#define __timeval_defined 1

#define _STRUCT_TIMESPEC 1

#define FD_SETSIZE 1024

#define _BITS_PTHREADTYPES_COMMON_H 1

#define _THREAD_SHARED_TYPES_H 1

#define _BITS_PTHREADTYPES_ARCH_H 1

#define __SIZEOF_PTHREAD_MUTEX_T 40

#define __SIZEOF_PTHREAD_ATTR_T 56

#define __SIZEOF_PTHREAD_RWLOCK_T 56

#define __SIZEOF_PTHREAD_BARRIER_T 32

#define __SIZEOF_PTHREAD_MUTEXATTR_T 4

#define __SIZEOF_PTHREAD_COND_T 48

#define __SIZEOF_PTHREAD_CONDATTR_T 4

#define __SIZEOF_PTHREAD_RWLOCKATTR_T 8

#define __SIZEOF_PTHREAD_BARRIERATTR_T 4

#define _THREAD_MUTEX_INTERNAL_H 1

#define __PTHREAD_MUTEX_HAVE_PREV 1

#define __have_pthread_attr_t 1

#define _ARPA_INET_H 1

#define _NETINET_IN_H 1

#define _BITS_STDINT_UINTN_H 1

#define _SYS_SOCKET_H 1

#define __iovec_defined 1

#define PF_UNSPEC 0

#define PF_LOCAL 1

#define PF_UNIX 1

#define PF_FILE 1

#define PF_INET 2

#define PF_AX25 3

#define PF_IPX 4

#define PF_APPLETALK 5

#define PF_NETROM 6

#define PF_BRIDGE 7

#define PF_ATMPVC 8

#define PF_X25 9

#define PF_INET6 10

#define PF_ROSE 11

#define PF_DECnet 12

#define PF_NETBEUI 13

#define PF_SECURITY 14

#define PF_KEY 15

#define PF_NETLINK 16

#define PF_ROUTE 16

#define PF_PACKET 17

#define PF_ASH 18

#define PF_ECONET 19

#define PF_ATMSVC 20

#define PF_RDS 21

#define PF_SNA 22

#define PF_IRDA 23

#define PF_PPPOX 24

#define PF_WANPIPE 25

#define PF_LLC 26

#define PF_IB 27

#define PF_MPLS 28

#define PF_CAN 29

#define PF_TIPC 30

#define PF_BLUETOOTH 31

#define PF_IUCV 32

#define PF_RXRPC 33

#define PF_ISDN 34

#define PF_PHONET 35

#define PF_IEEE802154 36

#define PF_CAIF 37

#define PF_ALG 38

#define PF_NFC 39

#define PF_VSOCK 40

#define PF_KCM 41

#define PF_QIPCRTR 42

#define PF_SMC 43

#define PF_XDP 44

#define PF_MCTP 45

#define PF_MAX 46

#define AF_UNSPEC 0

#define AF_LOCAL 1

#define AF_UNIX 1

#define AF_FILE 1

#define AF_INET 2

#define AF_AX25 3

#define AF_IPX 4

#define AF_APPLETALK 5

#define AF_NETROM 6

#define AF_BRIDGE 7

#define AF_ATMPVC 8

#define AF_X25 9

#define AF_INET6 10

#define AF_ROSE 11

#define AF_DECnet 12

#define AF_NETBEUI 13

#define AF_SECURITY 14

#define AF_KEY 15

#define AF_NETLINK 16

#define AF_ROUTE 16

#define AF_PACKET 17

#define AF_ASH 18

#define AF_ECONET 19

#define AF_ATMSVC 20

#define AF_RDS 21

#define AF_SNA 22

#define AF_IRDA 23

#define AF_PPPOX 24

#define AF_WANPIPE 25

#define AF_LLC 26

#define AF_IB 27

#define AF_MPLS 28

#define AF_CAN 29

#define AF_TIPC 30

#define AF_BLUETOOTH 31

#define AF_IUCV 32

#define AF_RXRPC 33

#define AF_ISDN 34

#define AF_PHONET 35

#define AF_IEEE802154 36

#define AF_CAIF 37

#define AF_ALG 38

#define AF_NFC 39

#define AF_VSOCK 40

#define AF_KCM 41

#define AF_QIPCRTR 42

#define AF_SMC 43

#define AF_XDP 44

#define AF_MCTP 45

#define AF_MAX 46

#define SOL_RAW 255

#define SOL_DECNET 261

#define SOL_X25 262

#define SOL_PACKET 263

#define SOL_ATM 264

#define SOL_AAL 265

#define SOL_IRDA 266

#define SOL_NETBEUI 267

#define SOL_LLC 268

#define SOL_DCCP 269

#define SOL_NETLINK 270

#define SOL_TIPC 271

#define SOL_RXRPC 272

#define SOL_PPPOL2TP 273

#define SOL_BLUETOOTH 274

#define SOL_PNPIPE 275

#define SOL_RDS 276

#define SOL_IUCV 277

#define SOL_CAIF 278

#define SOL_ALG 279

#define SOL_NFC 280

#define SOL_KCM 281

#define SOL_TLS 282

#define SOL_XDP 283

#define SOL_MPTCP 284

#define SOL_MCTP 285

#define SOL_SMC 286

#define SOL_VSOCK 287

#define SOMAXCONN 4096

#define _BITS_SOCKADDR_H 1

#define _SS_SIZE 128

#define __BITS_PER_LONG 64

#define __BITS_PER_LONG_LONG 64

#define FIOSETOWN 35073

#define SIOCSPGRP 35074

#define FIOGETOWN 35075

#define SIOCGPGRP 35076

#define SIOCATMARK 35077

#define SIOCGSTAMP_OLD 35078

#define SIOCGSTAMPNS_OLD 35079

#define SOL_SOCKET 1

#define SO_DEBUG 1

#define SO_REUSEADDR 2

#define SO_TYPE 3

#define SO_ERROR 4

#define SO_DONTROUTE 5

#define SO_BROADCAST 6

#define SO_SNDBUF 7

#define SO_RCVBUF 8

#define SO_SNDBUFFORCE 32

#define SO_RCVBUFFORCE 33

#define SO_KEEPALIVE 9

#define SO_OOBINLINE 10

#define SO_NO_CHECK 11

#define SO_PRIORITY 12

#define SO_LINGER 13

#define SO_BSDCOMPAT 14

#define SO_REUSEPORT 15

#define SO_PASSCRED 16

#define SO_PEERCRED 17

#define SO_RCVLOWAT 18

#define SO_SNDLOWAT 19

#define SO_RCVTIMEO_OLD 20

#define SO_SNDTIMEO_OLD 21

#define SO_SECURITY_AUTHENTICATION 22

#define SO_SECURITY_ENCRYPTION_TRANSPORT 23

#define SO_SECURITY_ENCRYPTION_NETWORK 24

#define SO_BINDTODEVICE 25

#define SO_ATTACH_FILTER 26

#define SO_DETACH_FILTER 27

#define SO_GET_FILTER 26

#define SO_PEERNAME 28

#define SO_ACCEPTCONN 30

#define SO_PEERSEC 31

#define SO_PASSSEC 34

#define SO_MARK 36

#define SO_PROTOCOL 38

#define SO_DOMAIN 39

#define SO_RXQ_OVFL 40

#define SO_WIFI_STATUS 41

#define SCM_WIFI_STATUS 41

#define SO_PEEK_OFF 42

#define SO_NOFCS 43

#define SO_LOCK_FILTER 44

#define SO_SELECT_ERR_QUEUE 45

#define SO_BUSY_POLL 46

#define SO_MAX_PACING_RATE 47

#define SO_BPF_EXTENSIONS 48

#define SO_INCOMING_CPU 49

#define SO_ATTACH_BPF 50

#define SO_DETACH_BPF 27

#define SO_ATTACH_REUSEPORT_CBPF 51

#define SO_ATTACH_REUSEPORT_EBPF 52

#define SO_CNX_ADVICE 53

#define SCM_TIMESTAMPING_OPT_STATS 54

#define SO_MEMINFO 55

#define SO_INCOMING_NAPI_ID 56

#define SO_COOKIE 57

#define SCM_TIMESTAMPING_PKTINFO 58

#define SO_PEERGROUPS 59

#define SO_ZEROCOPY 60

#define SO_TXTIME 61

#define SCM_TXTIME 61

#define SO_BINDTOIFINDEX 62

#define SO_TIMESTAMP_OLD 29

#define SO_TIMESTAMPNS_OLD 35

#define SO_TIMESTAMPING_OLD 37

#define SO_TIMESTAMP_NEW 63

#define SO_TIMESTAMPNS_NEW 64

#define SO_TIMESTAMPING_NEW 65

#define SO_RCVTIMEO_NEW 66

#define SO_SNDTIMEO_NEW 67

#define SO_DETACH_REUSEPORT_BPF 68

#define SO_PREFER_BUSY_POLL 69

#define SO_BUSY_POLL_BUDGET 70

#define SO_NETNS_COOKIE 71

#define SO_BUF_LOCK 72

#define SO_RESERVE_MEM 73

#define SO_TXREHASH 74

#define SO_RCVMARK 75

#define SO_PASSPIDFD 76

#define SO_PEERPIDFD 77

#define SO_TIMESTAMP 29

#define SO_TIMESTAMPNS 35

#define SO_TIMESTAMPING 37

#define SO_RCVTIMEO 20

#define SO_SNDTIMEO 21

#define SCM_TIMESTAMP 29

#define SCM_TIMESTAMPNS 35

#define SCM_TIMESTAMPING 37

#define __osockaddr_defined 1

#define __USE_KERNEL_IPV6_DEFS 0

#define IP_OPTIONS 4

#define IP_HDRINCL 3

#define IP_TOS 1

#define IP_TTL 2

#define IP_RECVOPTS 6

#define IP_RETOPTS 7

#define IP_MULTICAST_IF 32

#define IP_MULTICAST_TTL 33

#define IP_MULTICAST_LOOP 34

#define IP_ADD_MEMBERSHIP 35

#define IP_DROP_MEMBERSHIP 36

#define IP_UNBLOCK_SOURCE 37

#define IP_BLOCK_SOURCE 38

#define IP_ADD_SOURCE_MEMBERSHIP 39

#define IP_DROP_SOURCE_MEMBERSHIP 40

#define IP_MSFILTER 41

#define MCAST_JOIN_GROUP 42

#define MCAST_BLOCK_SOURCE 43

#define MCAST_UNBLOCK_SOURCE 44

#define MCAST_LEAVE_GROUP 45

#define MCAST_JOIN_SOURCE_GROUP 46

#define MCAST_LEAVE_SOURCE_GROUP 47

#define MCAST_MSFILTER 48

#define IP_MULTICAST_ALL 49

#define IP_UNICAST_IF 50

#define MCAST_EXCLUDE 0

#define MCAST_INCLUDE 1

#define IP_ROUTER_ALERT 5

#define IP_PKTINFO 8

#define IP_PKTOPTIONS 9

#define IP_PMTUDISC 10

#define IP_MTU_DISCOVER 10

#define IP_RECVERR 11

#define IP_RECVTTL 12

#define IP_RECVTOS 13

#define IP_MTU 14

#define IP_FREEBIND 15

#define IP_IPSEC_POLICY 16

#define IP_XFRM_POLICY 17

#define IP_PASSSEC 18

#define IP_TRANSPARENT 19

#define IP_ORIGDSTADDR 20

#define IP_RECVORIGDSTADDR 20

#define IP_MINTTL 21

#define IP_NODEFRAG 22

#define IP_CHECKSUM 23

#define IP_BIND_ADDRESS_NO_PORT 24

#define IP_RECVFRAGSIZE 25

#define IP_RECVERR_RFC4884 26

#define IP_PMTUDISC_DONT 0

#define IP_PMTUDISC_WANT 1

#define IP_PMTUDISC_DO 2

#define IP_PMTUDISC_PROBE 3

#define IP_PMTUDISC_INTERFACE 4

#define IP_PMTUDISC_OMIT 5

#define IP_LOCAL_PORT_RANGE 51

#define IP_PROTOCOL 52

#define SOL_IP 0

#define IP_DEFAULT_MULTICAST_TTL 1

#define IP_DEFAULT_MULTICAST_LOOP 1

#define IP_MAX_MEMBERSHIPS 20

#define IPV6_ADDRFORM 1

#define IPV6_2292PKTINFO 2

#define IPV6_2292HOPOPTS 3

#define IPV6_2292DSTOPTS 4

#define IPV6_2292RTHDR 5

#define IPV6_2292PKTOPTIONS 6

#define IPV6_CHECKSUM 7

#define IPV6_2292HOPLIMIT 8

#define IPV6_NEXTHOP 9

#define IPV6_AUTHHDR 10

#define IPV6_UNICAST_HOPS 16

#define IPV6_MULTICAST_IF 17

#define IPV6_MULTICAST_HOPS 18

#define IPV6_MULTICAST_LOOP 19

#define IPV6_JOIN_GROUP 20

#define IPV6_LEAVE_GROUP 21

#define IPV6_ROUTER_ALERT 22

#define IPV6_MTU_DISCOVER 23

#define IPV6_MTU 24

#define IPV6_RECVERR 25

#define IPV6_V6ONLY 26

#define IPV6_JOIN_ANYCAST 27

#define IPV6_LEAVE_ANYCAST 28

#define IPV6_MULTICAST_ALL 29

#define IPV6_ROUTER_ALERT_ISOLATE 30

#define IPV6_RECVERR_RFC4884 31

#define IPV6_IPSEC_POLICY 34

#define IPV6_XFRM_POLICY 35

#define IPV6_HDRINCL 36

#define IPV6_RECVPKTINFO 49

#define IPV6_PKTINFO 50

#define IPV6_RECVHOPLIMIT 51

#define IPV6_HOPLIMIT 52

#define IPV6_RECVHOPOPTS 53

#define IPV6_HOPOPTS 54

#define IPV6_RTHDRDSTOPTS 55

#define IPV6_RECVRTHDR 56

#define IPV6_RTHDR 57

#define IPV6_RECVDSTOPTS 58

#define IPV6_DSTOPTS 59

#define IPV6_RECVPATHMTU 60

#define IPV6_PATHMTU 61

#define IPV6_DONTFRAG 62

#define IPV6_RECVTCLASS 66

#define IPV6_TCLASS 67

#define IPV6_AUTOFLOWLABEL 70

#define IPV6_ADDR_PREFERENCES 72

#define IPV6_MINHOPCOUNT 73

#define IPV6_ORIGDSTADDR 74

#define IPV6_RECVORIGDSTADDR 74

#define IPV6_TRANSPARENT 75

#define IPV6_UNICAST_IF 76

#define IPV6_RECVFRAGSIZE 77

#define IPV6_FREEBIND 78

#define IPV6_ADD_MEMBERSHIP 20

#define IPV6_DROP_MEMBERSHIP 21

#define IPV6_RXHOPOPTS 54

#define IPV6_RXDSTOPTS 59

#define IPV6_PMTUDISC_DONT 0

#define IPV6_PMTUDISC_WANT 1

#define IPV6_PMTUDISC_DO 2

#define IPV6_PMTUDISC_PROBE 3

#define IPV6_PMTUDISC_INTERFACE 4

#define IPV6_PMTUDISC_OMIT 5

#define SOL_IPV6 41

#define SOL_ICMPV6 58

#define IPV6_RTHDR_LOOSE 0

#define IPV6_RTHDR_STRICT 1

#define IPV6_RTHDR_TYPE_0 0

#define IN_CLASSA_NET 4278190080

#define IN_CLASSA_NSHIFT 24

#define IN_CLASSA_HOST 16777215

#define IN_CLASSA_MAX 128

#define IN_CLASSB_NET 4294901760

#define IN_CLASSB_NSHIFT 16

#define IN_CLASSB_HOST 65535

#define IN_CLASSB_MAX 65536

#define IN_CLASSC_NET 4294967040

#define IN_CLASSC_NSHIFT 8

#define IN_CLASSC_HOST 255

#define IN_LOOPBACKNET 127

#define INET_ADDRSTRLEN 16

#define INET6_ADDRSTRLEN 46

#define _STDIO_H 1

#define __GLIBC_USE_LIB_EXT2 0

#define __GLIBC_USE_IEC_60559_BFP_EXT 0

#define __GLIBC_USE_IEC_60559_BFP_EXT_C23 0

#define __GLIBC_USE_IEC_60559_EXT 0

#define __GLIBC_USE_IEC_60559_FUNCS_EXT 0

#define __GLIBC_USE_IEC_60559_FUNCS_EXT_C23 0

#define __GLIBC_USE_IEC_60559_TYPES_EXT 0

#define _____fpos_t_defined 1

#define ____mbstate_t_defined 1

#define _____fpos64_t_defined 1

#define ____FILE_defined 1

#define __FILE_defined 1

#define __struct_FILE_defined 1

#define _IO_EOF_SEEN 16

#define _IO_ERR_SEEN 32

#define _IO_USER_LOCK 32768

#define __cookie_io_functions_t_defined 1

#define _IOFBF 0

#define _IOLBF 1

#define _IONBF 2

#define BUFSIZ 8192

#define EOF -1

#define SEEK_SET 0

#define SEEK_CUR 1

#define SEEK_END 2

#define L_tmpnam 20

#define TMP_MAX 238328

#define _BITS_STDIO_LIM_H 1

#define FILENAME_MAX 4096

#define L_ctermid 9

#define FOPEN_MAX 16

#define __HAVE_FLOAT128 0

#define __HAVE_DISTINCT_FLOAT128 0

#define __HAVE_FLOAT64X 1

#define __HAVE_FLOAT64X_LONG_DOUBLE 1

#define __HAVE_FLOAT16 0

#define __HAVE_FLOAT32 1

#define __HAVE_FLOAT64 1

#define __HAVE_FLOAT32X 1

#define __HAVE_FLOAT128X 0

#define __HAVE_DISTINCT_FLOAT16 0

#define __HAVE_DISTINCT_FLOAT32 0

#define __HAVE_DISTINCT_FLOAT64 0

#define __HAVE_DISTINCT_FLOAT32X 0

#define __HAVE_DISTINCT_FLOAT64X 0

#define __HAVE_DISTINCT_FLOAT128X 0

#define __HAVE_FLOATN_NOT_TYPEDEF 0

#define _STDLIB_H 1

#define WNOHANG 1

#define WUNTRACED 2

#define WSTOPPED 2

#define WEXITED 4

#define WCONTINUED 8

#define WNOWAIT 16777216

#define __WNOTHREAD 536870912

#define __WALL 1073741824

#define __WCLONE 2147483648

#define __W_CONTINUED 65535

#define __WCOREFLAG 128

#define __ldiv_t_defined 1

#define __lldiv_t_defined 1

#define RAND_MAX 2147483647

#define EXIT_FAILURE 1

#define EXIT_SUCCESS 0

#define _ALLOCA_H 1

#define _STRING_H 1

#define _BITS_TYPES_LOCALE_T_H 1

#define _BITS_TYPES___LOCALE_T_H 1

#define _STRINGS_H 1

#define _SYS_STAT_H 1

#define _BITS_STAT_H 1

#define _BITS_STRUCT_STAT_H 1

#define __S_IFMT 61440

#define __S_IFDIR 16384

#define __S_IFCHR 8192

#define __S_IFBLK 24576

#define __S_IFREG 32768

#define __S_IFIFO 4096

#define __S_IFLNK 40960

#define __S_IFSOCK 49152

#define __S_ISUID 2048

#define __S_ISGID 1024

#define __S_ISVTX 512

#define __S_IREAD 256

#define __S_IWRITE 128

#define __S_IEXEC 64

#define UTIME_NOW 1073741823

#define UTIME_OMIT 1073741822

#define S_IFMT 61440

#define S_IFDIR 16384

#define S_IFCHR 8192

#define S_IFBLK 24576

#define S_IFREG 32768

#define S_IFIFO 4096

#define S_IFLNK 40960

#define S_IFSOCK 49152

#define S_ISUID 2048

#define S_ISGID 1024

#define S_ISVTX 512

#define S_IRUSR 256

#define S_IWUSR 128

#define S_IXUSR 64

#define S_IRWXU 448

#define S_IREAD 256

#define S_IWRITE 128

#define S_IEXEC 64

#define S_IRGRP 32

#define S_IWGRP 16

#define S_IXGRP 8

#define S_IRWXG 56

#define S_IROTH 4

#define S_IWOTH 2

#define S_IXOTH 1

#define S_IRWXO 7

#define ACCESSPERMS 511

#define ALLPERMS 4095

#define DEFFILEMODE 438

#define S_BLKSIZE 512

#define SEGMENT_RECORD_LENGTH 3

#define LARGE_SEGMENT_RECORD_LENGTH 4

#define STANDARD_RECORD_LENGTH 3

#define ORG_RECORD_LENGTH 4

#define MAX_RECORD_LENGTH 4

#define NUM_DB_TYPES 39

typedef struct Option_File Option_File;

typedef struct Option_String Option_String;

typedef struct Option_Vec_u32 Option_Vec_u32;

typedef struct Option_Vec_u8 Option_Vec_u8;

typedef long __fd_mask;

typedef struct fd_set {
  __fd_mask __fds_bits[16];
} fd_set;

typedef long __time_t;

typedef long __suseconds_t;

typedef struct timeval {
  __time_t tv_sec;
  __suseconds_t tv_usec;
} timeval;

typedef long __syscall_slong_t;

typedef struct timespec {
  __time_t tv_sec;
  __syscall_slong_t tv_nsec;
} timespec;

typedef struct __sigset_t {
  unsigned long __val[16];
} __sigset_t;

typedef struct __IncompleteArrayField_c_uchar {
  unsigned char _0[0];
} __IncompleteArrayField_c_uchar;

typedef struct cmsghdr {
  uintptr_t cmsg_len;
  int cmsg_level;
  int cmsg_type;
  struct __IncompleteArrayField_c_uchar __cmsg_data;
} cmsghdr;

typedef unsigned int __socklen_t;

typedef __socklen_t socklen_t;

typedef struct iovec {
  void *iov_base;
  uintptr_t iov_len;
} iovec;

typedef struct msghdr {
  void *msg_name;
  socklen_t msg_namelen;
  struct iovec *msg_iov;
  uintptr_t msg_iovlen;
  void *msg_control;
  uintptr_t msg_controllen;
  int msg_flags;
} msghdr;

typedef unsigned short sa_family_t;

typedef struct sockaddr {
  sa_family_t sa_family;
  char sa_data[14];
} sockaddr;

typedef uint16_t in_port_t;

typedef uint32_t in_addr_t;

typedef struct in_addr {
  in_addr_t s_addr;
} in_addr;

typedef struct sockaddr_in {
  sa_family_t sin_family;
  in_port_t sin_port;
  struct in_addr sin_addr;
  unsigned char sin_zero[8];
} sockaddr_in;

typedef union in6_addr__bindgen_ty_1 {
  uint8_t __u6_addr8[16];
  uint16_t __u6_addr16[8];
  uint32_t __u6_addr32[4];
} in6_addr__bindgen_ty_1;

typedef struct in6_addr {
  union in6_addr__bindgen_ty_1 __in6_u;
} in6_addr;

typedef struct sockaddr_in6 {
  sa_family_t sin6_family;
  in_port_t sin6_port;
  uint32_t sin6_flowinfo;
  struct in6_addr sin6_addr;
  uint32_t sin6_scope_id;
} sockaddr_in6;

typedef struct _IO_marker {
  uint8_t _unused[0];
} _IO_marker;

typedef long __off_t;

typedef void _IO_lock_t;

typedef long __off64_t;

typedef struct _IO_codecvt {
  uint8_t _unused[0];
} _IO_codecvt;

typedef struct _IO_wide_data {
  uint8_t _unused[0];
} _IO_wide_data;

typedef struct _IO_FILE {
  int _flags;
  char *_IO_read_ptr;
  char *_IO_read_end;
  char *_IO_read_base;
  char *_IO_write_base;
  char *_IO_write_ptr;
  char *_IO_write_end;
  char *_IO_buf_base;
  char *_IO_buf_end;
  char *_IO_save_base;
  char *_IO_backup_base;
  char *_IO_save_end;
  struct _IO_marker *_markers;
  struct _IO_FILE *_chain;
  int _fileno;
  int _flags2;
  __off_t _old_offset;
  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];
  _IO_lock_t *_lock;
  __off64_t _offset;
  struct _IO_codecvt *_codecvt;
  struct _IO_wide_data *_wide_data;
  struct _IO_FILE *_freeres_list;
  void *_freeres_buf;
  struct _IO_FILE **_prevchain;
  int _mode;
  char _unused2[20];
} _IO_FILE;

typedef struct _IO_FILE FILE;

typedef long __ssize_t;

typedef __ssize_t (*cookie_read_function_t)(void *__cookie, char *__buf,
                                            uintptr_t __nbytes);

typedef __ssize_t (*cookie_write_function_t)(void *__cookie, const char *__buf,
                                             uintptr_t __nbytes);

typedef int (*cookie_seek_function_t)(void *__cookie, __off64_t *__pos,
                                      int __w);

typedef int (*cookie_close_function_t)(void *__cookie);

typedef struct _IO_cookie_io_functions_t {
  cookie_read_function_t read;
  cookie_write_function_t write;
  cookie_seek_function_t seek;
  cookie_close_function_t close;
} _IO_cookie_io_functions_t;

typedef struct _IO_cookie_io_functions_t cookie_io_functions_t;

typedef struct __va_list_tag {
  unsigned int gp_offset;
  unsigned int fp_offset;
  void *overflow_arg_area;
  void *reg_save_area;
} __va_list_tag;

typedef union __mbstate_t__bindgen_ty_1 {
  unsigned int __wch;
  char __wchb[4];
} __mbstate_t__bindgen_ty_1;

typedef struct __mbstate_t {
  int __count;
  union __mbstate_t__bindgen_ty_1 __value;
} __mbstate_t;

typedef struct _G_fpos_t {
  __off_t __pos;
  struct __mbstate_t __state;
} _G_fpos_t;

typedef struct _G_fpos_t __fpos_t;

typedef __fpos_t fpos_t;

typedef struct random_data {
  int32_t *fptr;
  int32_t *rptr;
  int32_t *state;
  int rand_type;
  int rand_deg;
  int rand_sep;
  int32_t *end_ptr;
} random_data;

typedef struct drand48_data {
  unsigned short __x[3];
  unsigned short __old_x[3];
  unsigned short __c;
  unsigned short __init;
  unsigned long long __a;
} drand48_data;

typedef unsigned int __uint32_t;

typedef int (*__compar_fn_t)(const void *arg1, const void *arg2);

typedef struct div_t {
  int quot;
  int rem;
} div_t;

typedef struct ldiv_t {
  long quot;
  long rem;
} ldiv_t;

typedef struct lldiv_t {
  long long quot;
  long long rem;
} lldiv_t;

typedef int wchar_t;

typedef struct __locale_data {
  uint8_t _address;
} __locale_data;

typedef struct __locale_struct {
  struct __locale_data *__locales[13];
  const unsigned short *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;
  const char *__names[13];
} __locale_struct;

typedef struct __locale_struct *__locale_t;

typedef __locale_t locale_t;

typedef unsigned long __dev_t;

typedef unsigned long __ino_t;

typedef unsigned long __nlink_t;

typedef unsigned int __mode_t;

typedef unsigned int __uid_t;

typedef unsigned int __gid_t;

typedef long __blksize_t;

typedef long __blkcnt_t;

typedef struct stat {
  __dev_t st_dev;
  __ino_t st_ino;
  __nlink_t st_nlink;
  __mode_t st_mode;
  __uid_t st_uid;
  __gid_t st_gid;
  int __pad0;
  __dev_t st_rdev;
  __off_t st_size;
  __blksize_t st_blksize;
  __blkcnt_t st_blocks;
  struct timespec st_atim;
  struct timespec st_mtim;
  struct timespec st_ctim;
  __syscall_slong_t __glibc_reserved[3];
} stat;

typedef __time_t time_t;

typedef __off_t off_t;

typedef struct GeoIPTag {
  struct Option_File *GeoIPDatabase;
  struct Option_String *file_path;
  struct Option_Vec_u8 cache;
  struct Option_Vec_u8 index_cache;
  struct Option_Vec_u32 databaseSegments;
  char databaseType;
  time_t mtime;
  int flags;
  off_t size;
  char record_length;
  int charset;
  int record_iter;
  int netmask;
  time_t last_mtime_check;
  off_t dyn_seg_size;
  unsigned int ext_flags;
} GeoIPTag;

typedef struct GeoIPTag GeoIP;

typedef struct GeoIPLookup {
  int netmask;
} GeoIPLookup;

typedef struct in6_addr geoipv6_t;

typedef struct GeoIPRegionTag {
  char country_code[3];
  char region[3];
} GeoIPRegionTag;

typedef struct GeoIPRegionTag GeoIPRegion;

typedef unsigned char __u_char;

typedef unsigned int __socket_type;

typedef unsigned int _bindgen_ty_1;

typedef unsigned int _bindgen_ty_2;

typedef unsigned int _bindgen_ty_3;

typedef unsigned int _bindgen_ty_4;

typedef unsigned int _bindgen_ty_5;

typedef unsigned int _bindgen_ty_6;

typedef unsigned int GeoIPExtFlags;

typedef unsigned int GeoIPCharset;

typedef unsigned int GeoIPOptions;

typedef unsigned int GeoIPDBTypes;

typedef unsigned int GeoIPProxyTypes;

typedef unsigned int GeoIPNetspeedValues;

#define __socket_type_SOCK_STREAM 1

#define __socket_type_SOCK_DGRAM 2

#define __socket_type_SOCK_RAW 3

#define __socket_type_SOCK_RDM 4

#define __socket_type_SOCK_SEQPACKET 5

#define __socket_type_SOCK_DCCP 6

#define __socket_type_SOCK_PACKET 10

#define __socket_type_SOCK_CLOEXEC 524288

#define __socket_type_SOCK_NONBLOCK 2048

#define MSG_OOB 1

#define MSG_PEEK 2

#define MSG_DONTROUTE 4

#define MSG_CTRUNC 8

#define MSG_PROXY 16

#define MSG_TRUNC 32

#define MSG_DONTWAIT 64

#define MSG_EOR 128

#define MSG_WAITALL 256

#define MSG_FIN 512

#define MSG_SYN 1024

#define MSG_CONFIRM 2048

#define MSG_RST 4096

#define MSG_ERRQUEUE 8192

#define MSG_NOSIGNAL 16384

#define MSG_MORE 32768

#define MSG_WAITFORONE 65536

#define MSG_BATCH 262144

#define MSG_ZEROCOPY 67108864

#define MSG_FASTOPEN 536870912

#define MSG_CMSG_CLOEXEC 1073741824

#define SCM_RIGHTS 1

#define SHUT_RD 0

#define SHUT_WR 1

#define SHUT_RDWR 2

#define IPPROTO_IP 0

#define IPPROTO_ICMP 1

#define IPPROTO_IGMP 2

#define IPPROTO_IPIP 4

#define IPPROTO_TCP 6

#define IPPROTO_EGP 8

#define IPPROTO_PUP 12

#define IPPROTO_UDP 17

#define IPPROTO_IDP 22

#define IPPROTO_TP 29

#define IPPROTO_DCCP 33

#define IPPROTO_IPV6 41

#define IPPROTO_RSVP 46

#define IPPROTO_GRE 47

#define IPPROTO_ESP 50

#define IPPROTO_AH 51

#define IPPROTO_MTP 92

#define IPPROTO_BEETPH 94

#define IPPROTO_ENCAP 98

#define IPPROTO_PIM 103

#define IPPROTO_COMP 108

#define IPPROTO_L2TP 115

#define IPPROTO_SCTP 132

#define IPPROTO_UDPLITE 136

#define IPPROTO_MPLS 137

#define IPPROTO_ETHERNET 143

#define IPPROTO_RAW 255

#define IPPROTO_MPTCP 262

#define IPPROTO_MAX 263

#define IPPROTO_HOPOPTS 0

#define IPPROTO_ROUTING 43

#define IPPROTO_FRAGMENT 44

#define IPPROTO_ICMPV6 58

#define IPPROTO_NONE 59

#define IPPROTO_DSTOPTS 60

#define IPPROTO_MH 135

#define IPPORT_ECHO 7

#define IPPORT_DISCARD 9

#define IPPORT_SYSTAT 11

#define IPPORT_DAYTIME 13

#define IPPORT_NETSTAT 15

#define IPPORT_FTP 21

#define IPPORT_TELNET 23

#define IPPORT_SMTP 25

#define IPPORT_TIMESERVER 37

#define IPPORT_NAMESERVER 42

#define IPPORT_WHOIS 43

#define IPPORT_MTP 57

#define IPPORT_TFTP 69

#define IPPORT_RJE 77

#define IPPORT_FINGER 79

#define IPPORT_TTYLINK 87

#define IPPORT_SUPDUP 95

#define IPPORT_EXECSERVER 512

#define IPPORT_LOGINSERVER 513

#define IPPORT_CMDSERVER 514

#define IPPORT_EFSSERVER 520

#define IPPORT_BIFFUDP 512

#define IPPORT_WHOSERVER 513

#define IPPORT_ROUTESERVER 520

#define IPPORT_RESERVED 1024

#define IPPORT_USERRESERVED 5000

#define GeoIPExtFlags_GEOIP_TEREDO_BIT 0

#define GeoIPCharset_GEOIP_CHARSET_ISO_8859_1 0

#define GeoIPCharset_GEOIP_CHARSET_UTF8 1

#define GeoIPOptions_GEOIP_STANDARD 0

#define GeoIPOptions_GEOIP_MEMORY_CACHE 1

#define GeoIPOptions_GEOIP_CHECK_CACHE 2

#define GeoIPOptions_GEOIP_INDEX_CACHE 4

#define GeoIPOptions_GEOIP_MMAP_CACHE 8

#define GeoIPOptions_GEOIP_SILENCE 16

#define GeoIPDBTypes_GEOIP_COUNTRY_EDITION 1

#define GeoIPDBTypes_GEOIP_REGION_EDITION_REV0 7

#define GeoIPDBTypes_GEOIP_CITY_EDITION_REV0 6

#define GeoIPDBTypes_GEOIP_ORG_EDITION 5

#define GeoIPDBTypes_GEOIP_ISP_EDITION 4

#define GeoIPDBTypes_GEOIP_CITY_EDITION_REV1 2

#define GeoIPDBTypes_GEOIP_REGION_EDITION_REV1 3

#define GeoIPDBTypes_GEOIP_PROXY_EDITION 8

#define GeoIPDBTypes_GEOIP_ASNUM_EDITION 9

#define GeoIPDBTypes_GEOIP_NETSPEED_EDITION 10

#define GeoIPDBTypes_GEOIP_DOMAIN_EDITION 11

#define GeoIPDBTypes_GEOIP_COUNTRY_EDITION_V6 12

#define GeoIPDBTypes_GEOIP_LOCATIONA_EDITION 13

#define GeoIPDBTypes_GEOIP_ACCURACYRADIUS_EDITION 14

#define GeoIPDBTypes_GEOIP_CITYCONFIDENCE_EDITION 15

#define GeoIPDBTypes_GEOIP_CITYCONFIDENCEDIST_EDITION 16

#define GeoIPDBTypes_GEOIP_LARGE_COUNTRY_EDITION 17

#define GeoIPDBTypes_GEOIP_LARGE_COUNTRY_EDITION_V6 18

#define GeoIPDBTypes_GEOIP_CITYCONFIDENCEDIST_ISP_ORG_EDITION 19

#define GeoIPDBTypes_GEOIP_CCM_COUNTRY_EDITION 20

#define GeoIPDBTypes_GEOIP_ASNUM_EDITION_V6 21

#define GeoIPDBTypes_GEOIP_ISP_EDITION_V6 22

#define GeoIPDBTypes_GEOIP_ORG_EDITION_V6 23

#define GeoIPDBTypes_GEOIP_DOMAIN_EDITION_V6 24

#define GeoIPDBTypes_GEOIP_LOCATIONA_EDITION_V6 25

#define GeoIPDBTypes_GEOIP_REGISTRAR_EDITION 26

#define GeoIPDBTypes_GEOIP_REGISTRAR_EDITION_V6 27

#define GeoIPDBTypes_GEOIP_USERTYPE_EDITION 28

#define GeoIPDBTypes_GEOIP_USERTYPE_EDITION_V6 29

#define GeoIPDBTypes_GEOIP_CITY_EDITION_REV1_V6 30

#define GeoIPDBTypes_GEOIP_CITY_EDITION_REV0_V6 31

#define GeoIPDBTypes_GEOIP_NETSPEED_EDITION_REV1 32

#define GeoIPDBTypes_GEOIP_NETSPEED_EDITION_REV1_V6 33

#define GeoIPDBTypes_GEOIP_COUNTRYCONF_EDITION 34

#define GeoIPDBTypes_GEOIP_CITYCONF_EDITION 35

#define GeoIPDBTypes_GEOIP_REGIONCONF_EDITION 36

#define GeoIPDBTypes_GEOIP_POSTALCONF_EDITION 37

#define GeoIPDBTypes_GEOIP_ACCURACYRADIUS_EDITION_V6 38

#define GeoIPProxyTypes_GEOIP_ANON_PROXY 1

#define GeoIPProxyTypes_GEOIP_HTTP_X_FORWARDED_FOR_PROXY 2

#define GeoIPProxyTypes_GEOIP_HTTP_CLIENT_IP_PROXY 3

#define GeoIPNetspeedValues_GEOIP_UNKNOWN_SPEED 0

#define GeoIPNetspeedValues_GEOIP_DIALUP_SPEED 1

#define GeoIPNetspeedValues_GEOIP_CABLEDSL_SPEED 2

#define GeoIPNetspeedValues_GEOIP_CORPORATE_SPEED 3

extern int select(int __nfds, struct fd_set *__readfds,
                  struct fd_set *__writefds, struct fd_set *__exceptfds,
                  struct timeval *__timeout);

extern int pselect(int __nfds, struct fd_set *__readfds,
                   struct fd_set *__writefds, struct fd_set *__exceptfds,
                   const struct timespec *__timeout,
                   const struct __sigset_t *__sigmask);

extern struct cmsghdr *__cmsg_nxthdr(struct msghdr *__mhdr,
                                     struct cmsghdr *__cmsg);

extern int socket(int __domain, int __type, int __protocol);

extern int socketpair(int __domain, int __type, int __protocol, int *__fds);

extern int bind(int __fd, const struct sockaddr *__addr, socklen_t __len);

extern int getsockname(int __fd, struct sockaddr *__addr, socklen_t *__len);

extern int connect(int __fd, const struct sockaddr *__addr, socklen_t __len);

extern int getpeername(int __fd, struct sockaddr *__addr, socklen_t *__len);

extern intptr_t send(int __fd, const void *__buf, uintptr_t __n, int __flags);

extern intptr_t recv(int __fd, void *__buf, uintptr_t __n, int __flags);

extern intptr_t sendto(int __fd, const void *__buf, uintptr_t __n, int __flags,
                       const struct sockaddr *__addr, socklen_t __addr_len);

extern intptr_t recvfrom(int __fd, void *__buf, uintptr_t __n, int __flags,
                         struct sockaddr *__addr, socklen_t *__addr_len);

extern intptr_t sendmsg(int __fd, const struct msghdr *__message, int __flags);

extern intptr_t recvmsg(int __fd, struct msghdr *__message, int __flags);

extern int getsockopt(int __fd, int __level, int __optname, void *__optval,
                      socklen_t *__optlen);

extern int setsockopt(int __fd, int __level, int __optname,
                      const void *__optval, socklen_t __optlen);

extern int listen(int __fd, int __n);

extern int accept(int __fd, struct sockaddr *__addr, socklen_t *__addr_len);

extern int shutdown(int __fd, int __how);

extern int sockatmark(int __fd);

extern int isfdtype(int __fd, int __fdtype);

extern uint32_t ntohl(uint32_t __netlong);

extern uint16_t ntohs(uint16_t __netshort);

extern uint32_t htonl(uint32_t __hostlong);

extern uint16_t htons(uint16_t __hostshort);

extern int bindresvport(int __sockfd, struct sockaddr_in *__sock_in);

extern int bindresvport6(int __sockfd, struct sockaddr_in6 *__sock_in);

extern in_addr_t inet_addr(const char *__cp);

extern in_addr_t inet_lnaof(struct in_addr __in);

extern struct in_addr inet_makeaddr(in_addr_t __net, in_addr_t __host);

extern in_addr_t inet_netof(struct in_addr __in);

extern in_addr_t inet_network(const char *__cp);

extern char *inet_ntoa(struct in_addr __in);

extern int inet_pton(int __af, const char *__cp, void *__buf);

extern const char *inet_ntop(int __af, const void *__cp, char *__buf,
                             socklen_t __len);

extern int inet_aton(const char *__cp, struct in_addr *__inp);

extern char *inet_neta(in_addr_t __net, char *__buf, uintptr_t __len);

extern char *inet_net_ntop(int __af, const void *__cp, int __bits, char *__buf,
                           uintptr_t __len);

extern int inet_net_pton(int __af, const char *__cp, void *__buf,
                         uintptr_t __len);

extern unsigned int inet_nsap_addr(const char *__cp, unsigned char *__buf,
                                   int __len);

extern char *inet_nsap_ntoa(int __len, const unsigned char *__cp, char *__buf);

extern int remove(const char *__filename);

extern int rename(const char *__old, const char *__new);

extern int renameat(int __oldfd, const char *__old, int __newfd,
                    const char *__new);

extern int fclose(FILE *__stream);

extern FILE *tmpfile(void);

extern char *tmpnam(char *arg1);

extern char *tmpnam_r(char *__s);

extern char *tempnam(const char *__dir, const char *__pfx);

extern int fflush(FILE *__stream);

extern int fflush_unlocked(FILE *__stream);

extern FILE *fopen(const char *__filename, const char *__modes);

extern FILE *freopen(const char *__filename, const char *__modes,
                     FILE *__stream);

extern FILE *fdopen(int __fd, const char *__modes);

extern FILE *fopencookie(void *__magic_cookie, const char *__modes,
                         cookie_io_functions_t __io_funcs);

extern FILE *fmemopen(void *__s, uintptr_t __len, const char *__modes);

extern FILE *open_memstream(char **__bufloc, uintptr_t *__sizeloc);

extern void setbuf(FILE *__stream, char *__buf);

extern int setvbuf(FILE *__stream, char *__buf, int __modes, uintptr_t __n);

extern void setbuffer(FILE *__stream, char *__buf, uintptr_t __size);

extern void setlinebuf(FILE *__stream);

extern int fprintf(FILE *__stream, const char *__format, ...);

extern int printf(const char *__format, ...);

extern int sprintf(char *__s, const char *__format, ...);

extern int vfprintf(FILE *__s, const char *__format,
                    struct __va_list_tag *__arg);

extern int vprintf(const char *__format, struct __va_list_tag *__arg);

extern int vsprintf(char *__s, const char *__format,
                    struct __va_list_tag *__arg);

extern int snprintf(char *__s, unsigned long __maxlen, const char *__format,
                    ...);

extern int vsnprintf(char *__s, unsigned long __maxlen, const char *__format,
                     struct __va_list_tag *__arg);

extern int vasprintf(char **__ptr, const char *__f,
                     struct __va_list_tag *__arg);

extern int __asprintf(char **__ptr, const char *__fmt, ...);

extern int asprintf(char **__ptr, const char *__fmt, ...);

extern int vdprintf(int __fd, const char *__fmt, struct __va_list_tag *__arg);

extern int dprintf(int __fd, const char *__fmt, ...);

extern int fscanf(FILE *__stream, const char *__format, ...);

extern int scanf(const char *__format, ...);

extern int sscanf(const char *__s, const char *__format, ...);

extern int fscanf1(FILE *__stream, const char *__format, ...);

extern int scanf1(const char *__format, ...);

extern int sscanf1(const char *__s, const char *__format, ...);

extern int vfscanf(FILE *__s, const char *__format,
                   struct __va_list_tag *__arg);

extern int vscanf(const char *__format, struct __va_list_tag *__arg);

extern int vsscanf(const char *__s, const char *__format,
                   struct __va_list_tag *__arg);

extern int vfscanf1(FILE *__s, const char *__format,
                    struct __va_list_tag *__arg);

extern int vscanf1(const char *__format, struct __va_list_tag *__arg);

extern int vsscanf1(const char *__s, const char *__format,
                    struct __va_list_tag *__arg);

extern int fgetc(FILE *__stream);

extern int getc(FILE *__stream);

extern int getchar(void);

extern int getc_unlocked(FILE *__stream);

extern int getchar_unlocked(void);

extern int fgetc_unlocked(FILE *__stream);

extern int fputc(int __c, FILE *__stream);

extern int putc(int __c, FILE *__stream);

extern int putchar(int __c);

extern int fputc_unlocked(int __c, FILE *__stream);

extern int putc_unlocked(int __c, FILE *__stream);

extern int putchar_unlocked(int __c);

extern int getw(FILE *__stream);

extern int putw(int __w, FILE *__stream);

extern char *fgets(char *__s, int __n, FILE *__stream);

extern __ssize_t __getdelim(char **__lineptr, uintptr_t *__n, int __delimiter,
                            FILE *__stream);

extern __ssize_t getdelim(char **__lineptr, uintptr_t *__n, int __delimiter,
                          FILE *__stream);

extern __ssize_t getline(char **__lineptr, uintptr_t *__n, FILE *__stream);

extern int fputs(const char *__s, FILE *__stream);

extern int puts(const char *__s);

extern int ungetc(int __c, FILE *__stream);

extern unsigned long fread(void *__ptr, unsigned long __size, unsigned long __n,
                           FILE *__stream);

extern unsigned long fwrite(const void *__ptr, unsigned long __size,
                            unsigned long __n, FILE *__s);

extern uintptr_t fread_unlocked(void *__ptr, uintptr_t __size, uintptr_t __n,
                                FILE *__stream);

extern uintptr_t fwrite_unlocked(const void *__ptr, uintptr_t __size,
                                 uintptr_t __n, FILE *__stream);

extern int fseek(FILE *__stream, long __off, int __whence);

extern long ftell(FILE *__stream);

extern void rewind(FILE *__stream);

extern int fseeko(FILE *__stream, __off_t __off, int __whence);

extern __off_t ftello(FILE *__stream);

extern int fgetpos(FILE *__stream, fpos_t *__pos);

extern int fsetpos(FILE *__stream, const fpos_t *__pos);

extern void clearerr(FILE *__stream);

extern int feof(FILE *__stream);

extern int ferror(FILE *__stream);

extern void clearerr_unlocked(FILE *__stream);

extern int feof_unlocked(FILE *__stream);

extern int ferror_unlocked(FILE *__stream);

extern void perror(const char *__s);

extern int fileno(FILE *__stream);

extern int fileno_unlocked(FILE *__stream);

extern int pclose(FILE *__stream);

extern FILE *popen(const char *__command, const char *__modes);

extern char *ctermid(char *__s);

extern void flockfile(FILE *__stream);

extern int ftrylockfile(FILE *__stream);

extern void funlockfile(FILE *__stream);

extern int __uflow(FILE *arg1);

extern int __overflow(FILE *arg1, int arg2);

extern uintptr_t __ctype_get_mb_cur_max(void);

extern double atof(const char *__nptr);

extern int atoi(const char *__nptr);

extern long atol(const char *__nptr);

extern long long atoll(const char *__nptr);

extern double strtod(const char *__nptr, char **__endptr);

extern float strtof(const char *__nptr, char **__endptr);

extern u128 strtold(const char *__nptr, char **__endptr);

extern long strtol(const char *__nptr, char **__endptr, int __base);

extern unsigned long strtoul(const char *__nptr, char **__endptr, int __base);

extern long long strtoq(const char *__nptr, char **__endptr, int __base);

extern unsigned long long strtouq(const char *__nptr, char **__endptr,
                                  int __base);

extern long long strtoll(const char *__nptr, char **__endptr, int __base);

extern unsigned long long strtoull(const char *__nptr, char **__endptr,
                                   int __base);

extern char *l64a(long __n);

extern long a64l(const char *__s);

extern long random(void);

extern void srandom(unsigned int __seed);

extern char *initstate(unsigned int __seed, char *__statebuf,
                       uintptr_t __statelen);

extern char *setstate(char *__statebuf);

extern int random_r(struct random_data *__buf, int32_t *__result);

extern int srandom_r(unsigned int __seed, struct random_data *__buf);

extern int initstate_r(unsigned int __seed, char *__statebuf,
                       uintptr_t __statelen, struct random_data *__buf);

extern int setstate_r(char *__statebuf, struct random_data *__buf);

extern int rand(void);

extern void srand(unsigned int __seed);

extern int rand_r(unsigned int *__seed);

extern double drand48(void);

extern double erand48(unsigned short *__xsubi);

extern long lrand48(void);

extern long nrand48(unsigned short *__xsubi);

extern long mrand48(void);

extern long jrand48(unsigned short *__xsubi);

extern void srand48(long __seedval);

extern unsigned short *seed48(unsigned short *__seed16v);

extern void lcong48(unsigned short *__param);

extern int drand48_r(struct drand48_data *__buffer, double *__result);

extern int erand48_r(unsigned short *__xsubi, struct drand48_data *__buffer,
                     double *__result);

extern int lrand48_r(struct drand48_data *__buffer, long *__result);

extern int nrand48_r(unsigned short *__xsubi, struct drand48_data *__buffer,
                     long *__result);

extern int mrand48_r(struct drand48_data *__buffer, long *__result);

extern int jrand48_r(unsigned short *__xsubi, struct drand48_data *__buffer,
                     long *__result);

extern int srand48_r(long __seedval, struct drand48_data *__buffer);

extern int seed48_r(unsigned short *__seed16v, struct drand48_data *__buffer);

extern int lcong48_r(unsigned short *__param, struct drand48_data *__buffer);

extern __uint32_t arc4random(void);

extern void arc4random_buf(void *__buf, uintptr_t __size);

extern __uint32_t arc4random_uniform(__uint32_t __upper_bound);

extern void *malloc(unsigned long __size);

extern void *calloc(unsigned long __nmemb, unsigned long __size);

extern void *realloc(void *__ptr, unsigned long __size);

extern void free(void *__ptr);

extern void *reallocarray(void *__ptr, uintptr_t __nmemb, uintptr_t __size);

extern void *alloca(unsigned long __size);

extern void *valloc(uintptr_t __size);

extern int posix_memalign(void **__memptr, uintptr_t __alignment,
                          uintptr_t __size);

extern void *aligned_alloc(unsigned long __alignment, unsigned long __size);

extern void abort(void);

extern int atexit(void (*__func)(void));

extern int at_quick_exit(void (*__func)(void));

extern int on_exit(void (*__func)(int __status, void *__arg), void *__arg);

extern void exit(int __status);

extern void quick_exit(int __status);

extern void _Exit(int __status);

extern char *getenv(const char *__name);

extern int putenv(char *__string);

extern int setenv(const char *__name, const char *__value, int __replace);

extern int unsetenv(const char *__name);

extern int clearenv(void);

extern char *mktemp(char *__template);

extern int mkstemp(char *__template);

extern int mkstemps(char *__template, int __suffixlen);

extern char *mkdtemp(char *__template);

extern int system(const char *__command);

extern char *realpath(const char *__name, char *__resolved);

extern void *bsearch(const void *__key, const void *__base, uintptr_t __nmemb,
                     uintptr_t __size, __compar_fn_t __compar);

extern void qsort(void *__base, uintptr_t __nmemb, uintptr_t __size,
                  __compar_fn_t __compar);

extern int abs(int __x);

extern long labs(long __x);

extern long long llabs(long long __x);

extern struct div_t div(int __numer, int __denom);

extern struct ldiv_t ldiv(long __numer, long __denom);

extern struct lldiv_t lldiv(long long __numer, long long __denom);

extern char *ecvt(double __value, int __ndigit, int *__decpt, int *__sign);

extern char *fcvt(double __value, int __ndigit, int *__decpt, int *__sign);

extern char *gcvt(double __value, int __ndigit, char *__buf);

extern char *qecvt(u128 __value, int __ndigit, int *__decpt, int *__sign);

extern char *qfcvt(u128 __value, int __ndigit, int *__decpt, int *__sign);

extern char *qgcvt(u128 __value, int __ndigit, char *__buf);

extern int ecvt_r(double __value, int __ndigit, int *__decpt, int *__sign,
                  char *__buf, uintptr_t __len);

extern int fcvt_r(double __value, int __ndigit, int *__decpt, int *__sign,
                  char *__buf, uintptr_t __len);

extern int qecvt_r(u128 __value, int __ndigit, int *__decpt, int *__sign,
                   char *__buf, uintptr_t __len);

extern int qfcvt_r(u128 __value, int __ndigit, int *__decpt, int *__sign,
                   char *__buf, uintptr_t __len);

extern int mblen(const char *__s, uintptr_t __n);

extern int mbtowc(wchar_t *__pwc, const char *__s, uintptr_t __n);

extern int wctomb(char *__s, wchar_t __wchar);

extern uintptr_t mbstowcs(wchar_t *__pwcs, const char *__s, uintptr_t __n);

extern uintptr_t wcstombs(char *__s, const wchar_t *__pwcs, uintptr_t __n);

extern int rpmatch(const char *__response);

extern int getsubopt(char **__optionp, char *const *__tokens, char **__valuep);

extern int getloadavg(double *__loadavg, int __nelem);

extern void *memcpy(void *__dest, const void *__src, unsigned long __n);

extern void *memmove(void *__dest, const void *__src, unsigned long __n);

extern void *memccpy(void *__dest, const void *__src, int __c,
                     unsigned long __n);

extern void *memset(void *__s, int __c, unsigned long __n);

extern int memcmp(const void *__s1, const void *__s2, unsigned long __n);

extern int __memcmpeq(const void *__s1, const void *__s2, uintptr_t __n);

extern void *memchr(const void *__s, int __c, unsigned long __n);

extern char *strcpy(char *__dest, const char *__src);

extern char *strncpy(char *__dest, const char *__src, unsigned long __n);

extern char *strcat(char *__dest, const char *__src);

extern char *strncat(char *__dest, const char *__src, unsigned long __n);

extern int strcmp(const char *__s1, const char *__s2);

extern int strncmp(const char *__s1, const char *__s2, unsigned long __n);

extern int strcoll(const char *__s1, const char *__s2);

extern unsigned long strxfrm(char *__dest, const char *__src,
                             unsigned long __n);

extern int strcoll_l(const char *__s1, const char *__s2, locale_t __l);

extern uintptr_t strxfrm_l(char *__dest, const char *__src, uintptr_t __n,
                           locale_t __l);

extern char *strdup(const char *__s);

extern char *strndup(const char *__string, unsigned long __n);

extern char *strchr(const char *__s, int __c);

extern char *strrchr(const char *__s, int __c);

extern char *strchrnul(const char *__s, int __c);

extern unsigned long strcspn(const char *__s, const char *__reject);

extern unsigned long strspn(const char *__s, const char *__accept);

extern char *strpbrk(const char *__s, const char *__accept);

extern char *strstr(const char *__haystack, const char *__needle);

extern char *strtok(char *__s, const char *__delim);

extern char *__strtok_r(char *__s, const char *__delim, char **__save_ptr);

extern char *strtok_r(char *__s, const char *__delim, char **__save_ptr);

extern char *strcasestr(const char *__haystack, const char *__needle);

extern void *memmem(const void *__haystack, uintptr_t __haystacklen,
                    const void *__needle, uintptr_t __needlelen);

extern void *__mempcpy(void *__dest, const void *__src, uintptr_t __n);

extern void *mempcpy(void *__dest, const void *__src, unsigned long __n);

extern unsigned long strlen(const char *__s);

extern uintptr_t strnlen(const char *__string, uintptr_t __maxlen);

extern char *strerror(int __errnum);

extern int strerror_r(int __errnum, char *__buf, uintptr_t __buflen);

extern char *strerror_l(int __errnum, locale_t __l);

extern int bcmp(const void *__s1, const void *__s2, unsigned long __n);

extern void bcopy(const void *__src, void *__dest, unsigned long __n);

extern void bzero(void *__s, unsigned long __n);

extern char *index(const char *__s, int __c);

extern char *rindex(const char *__s, int __c);

extern int ffs(int __i);

extern int ffsl(long __l);

extern int ffsll(long long __ll);

extern int strcasecmp(const char *__s1, const char *__s2);

extern int strncasecmp(const char *__s1, const char *__s2, unsigned long __n);

extern int strcasecmp_l(const char *__s1, const char *__s2, locale_t __loc);

extern int strncasecmp_l(const char *__s1, const char *__s2, uintptr_t __n,
                         locale_t __loc);

extern void explicit_bzero(void *__s, uintptr_t __n);

extern char *strsep(char **__stringp, const char *__delim);

extern char *strsignal(int __sig);

extern char *__stpcpy(char *__dest, const char *__src);

extern char *stpcpy(char *__dest, const char *__src);

extern char *__stpncpy(char *__dest, const char *__src, uintptr_t __n);

extern char *stpncpy(char *__dest, const char *__src, unsigned long __n);

extern unsigned long strlcpy(char *__dest, const char *__src,
                             unsigned long __n);

extern unsigned long strlcat(char *__dest, const char *__src,
                             unsigned long __n);

extern int stat(const char *__file, struct stat *__buf);

extern int fstat(int __fd, struct stat *__buf);

extern int fstatat(int __fd, const char *__file, struct stat *__buf,
                   int __flag);

extern int lstat(const char *__file, struct stat *__buf);

extern int chmod(const char *__file, __mode_t __mode);

extern int lchmod(const char *__file, __mode_t __mode);

extern int fchmod(int __fd, __mode_t __mode);

extern int fchmodat(int __fd, const char *__file, __mode_t __mode, int __flag);

extern __mode_t umask(__mode_t __mask);

extern int mkdir(const char *__path, __mode_t __mode);

extern int mkdirat(int __fd, const char *__path, __mode_t __mode);

extern int mknod(const char *__path, __mode_t __mode, __dev_t __dev);

extern int mknodat(int __fd, const char *__path, __mode_t __mode,
                   __dev_t __dev);

extern int mkfifo(const char *__path, __mode_t __mode);

extern int mkfifoat(int __fd, const char *__path, __mode_t __mode);

extern int utimensat(int __fd, const char *__path,
                     const struct timespec *__times, int __flags);

extern int futimens(int __fd, const struct timespec *__times);

extern void GeoIP_setup_custom_directory(char *dir);

extern GeoIP *GeoIP_open_type(int type_, int flags);

extern GeoIP *GeoIP_new(int flags);

GeoIP *GeoIP_open(const char *filename, int flags);

extern int GeoIP_db_avail(int type_);

extern void GeoIP_delete(GeoIP *gi);

extern const char *GeoIP_country_code_by_addr_gl(GeoIP *gi, const char *addr,
                                                 struct GeoIPLookup *gl);

extern const char *GeoIP_country_code_by_name_gl(GeoIP *gi, const char *host,
                                                 struct GeoIPLookup *gl);

extern const char *GeoIP_country_code3_by_addr_gl(GeoIP *gi, const char *addr,
                                                  struct GeoIPLookup *gl);

extern const char *GeoIP_country_code3_by_name_gl(GeoIP *gi, const char *host,
                                                  struct GeoIPLookup *gl);

extern const char *GeoIP_country_name_by_addr_gl(GeoIP *gi, const char *addr,
                                                 struct GeoIPLookup *gl);

extern const char *GeoIP_country_name_by_name_gl(GeoIP *gi, const char *host,
                                                 struct GeoIPLookup *gl);

extern const char *GeoIP_country_name_by_ipnum_gl(GeoIP *gi,
                                                  unsigned long ipnum,
                                                  struct GeoIPLookup *gl);

extern const char *GeoIP_country_code_by_ipnum_gl(GeoIP *gi,
                                                  unsigned long ipnum,
                                                  struct GeoIPLookup *gl);

extern const char *GeoIP_country_code3_by_ipnum_gl(GeoIP *gi,
                                                   unsigned long ipnum,
                                                   struct GeoIPLookup *gl);

extern const char *GeoIP_country_name_by_ipnum_v6_gl(GeoIP *gi, geoipv6_t ipnum,
                                                     struct GeoIPLookup *gl);

extern const char *GeoIP_country_code_by_ipnum_v6_gl(GeoIP *gi, geoipv6_t ipnum,
                                                     struct GeoIPLookup *gl);

extern const char *GeoIP_country_code3_by_ipnum_v6_gl(GeoIP *gi,
                                                      geoipv6_t ipnum,
                                                      struct GeoIPLookup *gl);

extern const char *GeoIP_country_code_by_addr_v6_gl(GeoIP *gi, const char *addr,
                                                    struct GeoIPLookup *gl);

extern const char *GeoIP_country_code_by_name_v6_gl(GeoIP *gi, const char *host,
                                                    struct GeoIPLookup *gl);

extern const char *GeoIP_country_code3_by_addr_v6_gl(GeoIP *gi,
                                                     const char *addr,
                                                     struct GeoIPLookup *gl);

extern const char *GeoIP_country_code3_by_name_v6_gl(GeoIP *gi,
                                                     const char *host,
                                                     struct GeoIPLookup *gl);

extern const char *GeoIP_country_name_by_addr_v6_gl(GeoIP *gi, const char *addr,
                                                    struct GeoIPLookup *gl);

extern const char *GeoIP_country_name_by_name_v6_gl(GeoIP *gi, const char *host,
                                                    struct GeoIPLookup *gl);

extern int GeoIP_id_by_addr_gl(GeoIP *gi, const char *addr,
                               struct GeoIPLookup *gl);

extern int GeoIP_id_by_name_gl(GeoIP *gi, const char *host,
                               struct GeoIPLookup *gl);

extern int GeoIP_id_by_ipnum_gl(GeoIP *gi, unsigned long ipnum,
                                struct GeoIPLookup *gl);

extern int GeoIP_id_by_addr_v6_gl(GeoIP *gi, const char *addr,
                                  struct GeoIPLookup *gl);

extern int GeoIP_id_by_name_v6_gl(GeoIP *gi, const char *host,
                                  struct GeoIPLookup *gl);

extern int GeoIP_id_by_ipnum_v6_gl(GeoIP *gi, geoipv6_t ipnum,
                                   struct GeoIPLookup *gl);

extern GeoIPRegion *GeoIP_region_by_addr_gl(GeoIP *gi, const char *addr,
                                            struct GeoIPLookup *gl);

extern GeoIPRegion *GeoIP_region_by_name_gl(GeoIP *gi, const char *host,
                                            struct GeoIPLookup *gl);

extern GeoIPRegion *GeoIP_region_by_ipnum_gl(GeoIP *gi, unsigned long ipnum,
                                             struct GeoIPLookup *gl);

extern GeoIPRegion *GeoIP_region_by_addr_v6_gl(GeoIP *gi, const char *addr,
                                               struct GeoIPLookup *gl);

extern GeoIPRegion *GeoIP_region_by_name_v6_gl(GeoIP *gi, const char *host,
                                               struct GeoIPLookup *gl);

extern GeoIPRegion *GeoIP_region_by_ipnum_v6_gl(GeoIP *gi, geoipv6_t ipnum,
                                                struct GeoIPLookup *gl);

extern void GeoIPRegion_delete(GeoIPRegion *gir);

extern void GeoIP_assign_region_by_inetaddr_gl(GeoIP *gi,
                                               unsigned long inetaddr,
                                               GeoIPRegion *gir,
                                               struct GeoIPLookup *gl);

extern void GeoIP_assign_region_by_inetaddr_v6_gl(GeoIP *gi, geoipv6_t inetaddr,
                                                  GeoIPRegion *gir,
                                                  struct GeoIPLookup *gl);

extern char *GeoIP_name_by_ipnum_gl(GeoIP *gi, unsigned long ipnum,
                                    struct GeoIPLookup *gl);

extern char *GeoIP_name_by_addr_gl(GeoIP *gi, const char *addr,
                                   struct GeoIPLookup *gl);

extern char *GeoIP_name_by_name_gl(GeoIP *gi, const char *host,
                                   struct GeoIPLookup *gl);

extern char *GeoIP_name_by_ipnum_v6_gl(GeoIP *gi, geoipv6_t ipnum,
                                       struct GeoIPLookup *gl);

extern char *GeoIP_name_by_addr_v6_gl(GeoIP *gi, const char *addr,
                                      struct GeoIPLookup *gl);

extern char *GeoIP_name_by_name_v6_gl(GeoIP *gi, const char *name,
                                      struct GeoIPLookup *gl);

extern void GeoIP_string_delete(char *ptr);

/**
 * return two letter country code
 */
extern const char *GeoIP_code_by_id(int id);

/**
 * return three letter country code
 */
extern const char *GeoIP_code3_by_id(int id);

/**
 * return full name of country in utf8 or iso-8859-1
 */
extern const char *GeoIP_country_name_by_id(GeoIP *gi, int id);

/**
 * return full name of country
 */
extern const char *GeoIP_name_by_id(int id);

/**
 * return continent of country
 */
extern const char *GeoIP_continent_by_id(int id);

/**
 * return id by country code
 */
extern int GeoIP_id_by_code(const char *country);

/**
 * return return number of known countries
 */
extern unsigned int GeoIP_num_countries(void);

extern char *GeoIP_database_info(GeoIP *gi);

__u_char GeoIP_database_edition(const GeoIP *gi);

extern int GeoIP_charset(GeoIP *gi);

extern int GeoIP_set_charset(GeoIP *gi, int charset);

extern int GeoIP_enable_teredo(GeoIP *gi, int true_false);

extern int GeoIP_teredo(GeoIP *gi);

extern char **GeoIP_range_by_ip_gl(GeoIP *gi, const char *addr,
                                   struct GeoIPLookup *gl);

extern void GeoIP_range_by_ip_delete(char **ptr);

extern const char *GeoIP_region_name_by_code(const char *country_code,
                                             const char *region_code);

extern const char *
GeoIP_time_zone_by_country_and_region(const char *country_code,
                                      const char *region_code);

extern unsigned long GeoIP_addr_to_num(const char *addr);

extern char *GeoIP_num_to_addr(unsigned long ipnum);

extern char *_GeoIP_iso_8859_1__utf8(const char *iso);

extern int GeoIP_cleanup(void);

extern const char *GeoIP_lib_version(void);

extern const char *GeoIP_country_code_by_addr(GeoIP *gi, const char *addr);

extern const char *GeoIP_country_code_by_name(GeoIP *gi, const char *host);

extern const char *GeoIP_country_code3_by_addr(GeoIP *gi, const char *addr);

extern const char *GeoIP_country_code3_by_name(GeoIP *gi, const char *host);

extern const char *GeoIP_country_name_by_addr(GeoIP *gi, const char *addr);

extern const char *GeoIP_country_name_by_name(GeoIP *gi, const char *host);

extern const char *GeoIP_country_name_by_ipnum(GeoIP *gi, unsigned long ipnum);

extern const char *GeoIP_country_code_by_ipnum(GeoIP *gi, unsigned long ipnum);

extern const char *GeoIP_country_code3_by_ipnum(GeoIP *gi, unsigned long ipnum);

extern const char *GeoIP_country_name_by_ipnum_v6(GeoIP *gi, geoipv6_t ipnum);

extern const char *GeoIP_country_code_by_ipnum_v6(GeoIP *gi, geoipv6_t ipnum);

extern const char *GeoIP_country_code3_by_ipnum_v6(GeoIP *gi, geoipv6_t ipnum);

extern const char *GeoIP_country_code_by_addr_v6(GeoIP *gi, const char *addr);

extern const char *GeoIP_country_code_by_name_v6(GeoIP *gi, const char *host);

extern const char *GeoIP_country_code3_by_addr_v6(GeoIP *gi, const char *addr);

extern const char *GeoIP_country_code3_by_name_v6(GeoIP *gi, const char *host);

extern const char *GeoIP_country_name_by_addr_v6(GeoIP *gi, const char *addr);

extern const char *GeoIP_country_name_by_name_v6(GeoIP *gi, const char *host);

extern int GeoIP_id_by_addr(GeoIP *gi, const char *addr);

extern int GeoIP_id_by_name(GeoIP *gi, const char *host);

extern int GeoIP_id_by_ipnum(GeoIP *gi, unsigned long ipnum);

extern int GeoIP_id_by_addr_v6(GeoIP *gi, const char *addr);

extern int GeoIP_id_by_name_v6(GeoIP *gi, const char *host);

extern int GeoIP_id_by_ipnum_v6(GeoIP *gi, geoipv6_t ipnum);

extern GeoIPRegion *GeoIP_region_by_addr(GeoIP *gi, const char *addr);

extern GeoIPRegion *GeoIP_region_by_name(GeoIP *gi, const char *host);

extern GeoIPRegion *GeoIP_region_by_ipnum(GeoIP *gi, unsigned long ipnum);

extern GeoIPRegion *GeoIP_region_by_addr_v6(GeoIP *gi, const char *addr);

extern GeoIPRegion *GeoIP_region_by_name_v6(GeoIP *gi, const char *host);

extern GeoIPRegion *GeoIP_region_by_ipnum_v6(GeoIP *gi, geoipv6_t ipnum);

extern void GeoIP_assign_region_by_inetaddr(GeoIP *gi, unsigned long inetaddr,
                                            GeoIPRegion *gir);

extern void GeoIP_assign_region_by_inetaddr_v6(GeoIP *gi, geoipv6_t inetaddr,
                                               GeoIPRegion *gir);

extern char *GeoIP_name_by_ipnum(GeoIP *gi, unsigned long ipnum);

extern char *GeoIP_name_by_addr(GeoIP *gi, const char *addr);

extern char *GeoIP_name_by_name(GeoIP *gi, const char *host);

extern char *GeoIP_name_by_ipnum_v6(GeoIP *gi, geoipv6_t ipnum);

extern char *GeoIP_name_by_addr_v6(GeoIP *gi, const char *addr);

extern char *GeoIP_name_by_name_v6(GeoIP *gi, const char *name);

/**
 * GeoIP_last_netmask is deprecated - it is not thread safe
 */
extern int GeoIP_last_netmask(GeoIP *gi);

extern char **GeoIP_range_by_ip(GeoIP *gi, const char *addr);

extern int GeoIP_country_id_by_addr(GeoIP *gi, const char *addr);

extern int GeoIP_country_id_by_name(GeoIP *gi, const char *host);

extern char *GeoIP_org_by_addr(GeoIP *gi, const char *addr);

extern char *GeoIP_org_by_name(GeoIP *gi, const char *host);

extern char *GeoIP_org_by_ipnum(GeoIP *gi, unsigned long ipnum);

extern int GeoIP_country_id_by_addr_v6(GeoIP *gi, const char *addr);

extern char *GeoIP_org_by_ipnum_v6(GeoIP *gi, geoipv6_t ipnum);

extern char *GeoIP_org_by_addr_v6(GeoIP *gi, const char *addr);

extern char *GeoIP_org_by_name_v6(GeoIP *gi, const char *name);

int get_fileno(const struct GeoIPTag *gi);
