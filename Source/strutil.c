#include "../Header/strutil.h"

int64
strlen (const char *const string)
{
    int64 length = -1;
    while ( string [ ++ length ] );
    return length;
}

bool
streq (const char *const str1,
       const char *const str2)
{
    int64 index = -1;
    bool is_equal;

    while (str1[++index] && str2[index] && str1[index] == str2[index]);

    is_equal =
        (!str1[index]) && (!str2[index]);

    return is_equal;
}