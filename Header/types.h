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
    FALSE,
    TRUE
} bool_t;

typedef bool_t bool;
#define false ((bool)(FALSE))
#define true ((bool)(TRUE))
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

typedef int64 clock_t;

typedef union sigval {   /* Data passed with notification */
    int64 sival_int;     /* Integer value */
    void *sival_ptr;     /* Pointer value */
} sigval;

typedef struct siginfo_t {
    int      si_signo;     /* Signal number */
    int      si_errno;     /* An errno value */
    int      si_code;      /* Signal code */
    int      si_trapno;    /* Trap number that caused
                                hardware-generated signal
                                (unused on most architectures) */
    pid_t    si_pid;       /* Sending process ID */
    uid_t    si_uid;       /* Real user ID of sending process */
    int      si_status;    /* Exit value or signal */
    clock_t  si_utime;     /* User time consumed */
    clock_t  si_stime;     /* System time consumed */
    union sigval si_value; /* Signal value */
    int      si_int;       /* POSIX.1b signal */
    void    *si_ptr;       /* POSIX.1b signal */
    int      si_overrun;   /* Timer overrun count;
                                POSIX.1b timers */
    int      si_timerid;   /* Timer ID; POSIX.1b timers */
    void    *si_addr;      /* Memory location which caused fault */
    long     si_band;      /* Band event (was int in
                                glibc 2.3.2 and earlier) */
    int      si_fd;        /* File descriptor */
    short    si_addr_lsb;  /* Least significant bit of address
                                (since Linux 2.6.32) */
    void    *si_lower;     /* Lower bound when address violation
                                occurred (since Linux 3.19) */
    void    *si_upper;     /* Upper bound when address violation
                                occurred (since Linux 3.19) */
    int      si_pkey;      /* Protection key on PTE that caused
                                fault (since Linux 4.6) */
    void    *si_call_addr; /* Address of system call instruction
                                (since Linux 3.5) */
    int      si_syscall;   /* Number of attempted system call
                                (since Linux 3.5) */
    unsigned int si_arch;  /* Architecture of attempted system call
                                (since Linux 3.5) */
} siginfo_t;

#endif /* TYPES_H */