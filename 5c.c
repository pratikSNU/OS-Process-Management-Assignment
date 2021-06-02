//Program to add two numbers;
#include<stdio.h>
#include<unistd.h>
int main() {
        int a,b;
        a=50,b=80;
        printf("sum is %d\n",a+b);
        return 0;
}
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
