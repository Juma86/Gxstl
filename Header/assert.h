#ifndef ASSERT_H
#define ASSERT_H
#include "types.h"

#define ASSERT_TRUE(val,fail_text,length) assert(TRUE,val,fail_text,length)
#define ASSERT_FALSE(val,fail_text,length) assert(FALSE,val,fail_text,length)

/* exits if values are not equal. */
void assert (int64 val1, int64 val2, void* fail_text, int64 length);

/* exits if val is false */
void assert_true (bool cond, void *fail_text, int64 length);

/* exits if val is true */
void assert_false (bool cond, void *fail_text, int64 length);
#endif /* ASSERT_H */