#include<stdio.h>

extern int x;

void printValue() {
    printf("Value of x accessed using extern in q8second.c is: %d\n", x);
}