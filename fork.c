#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
intmain(){
   fork();
    printf("Hello World\n");
    return 0;
}