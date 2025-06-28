enum CONTYPE
{
    STDOUT,
    STDIN,
    STDERR
};

// Writes count bytes of buf to fd.
// e.g. write(stdout, "Hello, World!\n", strlen("Hello, World!\n"));
// The above line would print Hello, World! to the console under typical circumstances.
void write (int fd, void *buf, int count);