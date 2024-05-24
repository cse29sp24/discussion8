#include <unistd.h>
#include <stdio.h>

int main()
{
    printf("Hello world!\n");

    char *argv[4] = { "ls", "-a", "-l", NULL };
    execvp("ls", argv);

    printf("Hello again!\n");
    return 0;
}
