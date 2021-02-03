#include <stdio.h>
#include <unistd.h>

int main (){
    pid_t pid = fork ();

    if (pid == 0) {
        printf ("Child PID - %d.\n", getpid());
    } else if (pid == -1){
        printf("Something went wrong.");
    } else {

        printf ("Parent PID - %d, while child PID - %d.\n", getpid(), pid);
    }

    return 0;
}