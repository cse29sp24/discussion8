#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>

int main()
{
    int v = 0;
    v = v + 10;
    printf("v = %d\n", v);

    pid_t pid = fork();

    printf("Hello again, pid=%d\n", pid);

    return 0;
}
