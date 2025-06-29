#include "../Header/types.h"
#include "../Header/assert.h"

void assert_true (bool cond,
                  void *fail_text,
                  int64 length)
{
    assert (TRUE,
            (int64) cond,
            fail_text,
            length);
}

void assert_false (bool cond,
                   void *fail_text,
                   int64 length)
{
    assert (FALSE,
            (int64) cond,
            fail_text,
            length);
}