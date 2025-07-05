#include "../Header/gx_common.h"

static gx_bool gx_perform_init_asserts = gx_true;

exitcode main (void);

exitcode
init (void)
{
    if (gx_perform_init_asserts) {
        /* __gxstl_tests_assert_bools      (); */
        /* __gxstl_tests_assert_consolefds (); */
        /* __gxstl_tests_assert_exitcodes  (); */
        /* __gxstl_tests_assert_idtypes    (); */
        /* __gxstl_tests_assert_typesizes  (); */
    }
    
    return main();
}