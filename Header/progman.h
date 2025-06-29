enum EXIT {
    SUCCESS,
    FAILURE
};

// Ends program with exit code rc
// e.g. exit(0);
// The above line would exit the program with an exit code of 0, indicating success.
void exit (int rc);

// Duplicates the running process
// e.g. fork();
// The above line would duplicate the current process into 2.
void fork();