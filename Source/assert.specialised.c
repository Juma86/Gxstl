#include "../Header/gx_assert.h"

void gx_assert_true (gx_bool cond,
                  void *fail_text,
                  int64 length)
{
    gx_assert (gx_TRUE,
            (int64) cond,
            fail_text,
            length);
}

void gx_assert_false (gx_bool cond,
                   void *fail_text,
                   int64 length)
{
    gx_assert (gx_FALSE,
            (int64) cond,
            fail_text,
            length);
}