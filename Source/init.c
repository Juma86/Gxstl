#include "../Header/common.h"

static bool perform_init_asserts = true;

exitcode main (void);

exitcode
init (void)
{
    if (perform_init_asserts) {
        /* __gxstl_tests_assert_bools      (); */
        /* __gxstl_tests_assert_consolefds (); */
        /* __gxstl_tests_assert_exitcodes  (); */
        /* __gxstl_tests_assert_idtypes    (); */
        /* __gxstl_tests_assert_typesizes  (); */
    }
    
    return main();
}