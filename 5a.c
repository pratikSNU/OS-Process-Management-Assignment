#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
int main() {
    pid_t pid, cpid, ppid;
    pid = fork();
    if (pid < 0) {
        perror("fork() failure\n");
        return 1;
    }
    if (pid == 0) {
    cpid = getpid();    
    ppid = getppid();
    printf("Process id is %d and Parent process id is %d of the child process\n", cpid, ppid);
}
    else {
        sleep(1);
        cpid = getpid();
        ppid = getppid();
        printf("Process id is %d and Parent process id is %d of the parent process\n", cpid, ppid);
    }
    return 0;
}
