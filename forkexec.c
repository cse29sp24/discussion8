#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("parent pid: %d\n", getpid());

    pid_t pid = fork();
    if (pid < 0) {
        perror("fork");
        exit(EXIT_FAILURE);
    } else if (pid == 0) {
        // child process
        char *argv[4] = { "ls", "-a", "-l", NULL };
        execvp("ls", argv);
    }

    /* TODO: parent should wait for child */

    printf("Process %d exiting...\n", getpid());
    return EXIT_SUCCESS;
}
