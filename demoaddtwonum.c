//Program to call the process using execvp();

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main() {
        char *args[]={"./addtwo",NULL};
        fork();
        execvp(args[0],args);
        return 0;
}
