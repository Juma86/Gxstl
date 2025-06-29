#ifndef CONIO_H
#define CONIO_H
#include "types.h"

/* Writes count bytes of buf to fd.
 * e.g. write(stdout, "Hello, World!\n", strlen("Hello, World!\n"));
 * The above line would print Hello, World! to the console under typical circumstances. */
void write (consolefd fd, void *buf, int count);

/* Reads count bytes of fd to buf
 * e.g. read(stdin,my_buf,256);
 * The above line reads <=256 chars from console to my_buf under typical circumstances. */
 int read (consolefd fd, void *buf, int count);
#endif /*CONIO_H*/