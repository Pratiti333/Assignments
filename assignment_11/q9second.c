#include<stdio.h>


extern int num;

void modifyValue() {
    printf("Inside q9second.c, initial value of num = %d\n", num);
    
    
    num = 50;
    
    printf("Inside q9second.c, modified value of num = %d\n", num);
}