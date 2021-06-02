//program to take input and print
#include<stdio.h>
#include<unistd.h>
int main() {
        char name[100];
        printf("\nenter yOur name: ");
        scanf("%s",name);
        printf("hello %s\n",name);
        return 0;
}
