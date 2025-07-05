#ifndef TYPES_H
#define TYPES_H

typedef __int128_t  int128;
typedef __uint128_t uint128;
typedef long long int64;
typedef unsigned long long uint64;
typedef long int32;
typedef unsigned uint32;
typedef short int16;
typedef unsigned short uint16;
typedef char int8;
typedef unsigned char uint8;
void __gxstl_tests_assert_typesizes ();



typedef enum exitcode_t {
    SUCCESS,
    FAILURE
} exitcode_t ;

typedef exitcode_t exitcode;
#define success ((exitcode)(SUCCESS))
#define failure ((exitcode)(FAILURE))
void __gxstl_tests_assert_exitcodes ();


typedef enum idtype_t
{
    P_PID,
    P_PIDFD,
    P_PGID,
    P_ALL
} idtype_t;

typedef int64 id_t;
typedef id_t gid_t;
typedef id_t uid_t;
typedef id_t pid_t;
void __gxstl_tests_assert_idtypes();


typedef enum bool_t
{
    gx_FALSE,
    gx_TRUE
} bool_t;

typedef bool_t gx_bool;
#define gx_false ((gx_bool)(gx_FALSE))
#define gx_true ((gx_bool)(gx_TRUE))
void __gxstl_tests_assert_bools();


typedef enum consolefd_t
{
    STDIN,
    STDOUT,
    STDERR
} consolefd_t;

typedef consolefd_t consolefd;
#define stdout ((consolefd)(STDOUT))
#define stdin ((consolefd)(STDIN))
#define stderr ((consolefd)(STDERR))
void __gxstl_tests_assert_consolefds();

#endif /* TYPES_H */