#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
int variable=24;
int main() {
        pid_t pid;
        pid = vfork();
        if (pid < 0) {
                perror("child process not created \n");
                return 1;
        }
        if(pid==0) {
                variable=25;
                exit(0);
        } else {
                printf("printing modified value of variable from parent process = %d\n",variable);
        }
        return 0;
}
