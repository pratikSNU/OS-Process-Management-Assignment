//program to call the process
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main() {
        char *args[]={"./name",NULL};
        fork();
        execvp(args[0],args);
        return 0;
}

