#include <stdio.h>
#include <unistd.h>
int main () {
    int pid, ppid;
    pid=getpid();
    ppid=getppid();

    printf("My ID - %d.\n", pid);
    printf("Parent ID - %d.\n", ppid);

    return 0;
};