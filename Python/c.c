#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    static char *newargv[] = {"/usr/bin/python", NULL, NULL};
    static char *newenviron[] = {NULL};
    pid_t pid;

    if (argc != 2)
    {
        fprintf(stderr, "Usage: $s <file-to-exec>\n", argv[0]);
        exit(EXIT_FAILURE);
    }
    newargv[1] = argv[1];

    if ((pid = fork()) == -1)
    {
        perror("fork");
        exit(EXIT_FAILURE);
    }

    if (pid == 0)
    {
        execve(newargv[0], newargv, newenviron);
        perror("execve");
    }

    printf("%d process started\n", pid);
    return 0;
}