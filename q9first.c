#include<stdio.h>


int num = 10;

void modifyValue(); 

int main() {
    printf("Before modification in q9first.c, num = %d\n", num);
    
    
    modifyValue();
    
    printf("After modification in q9first.c, num = %d\n", num);
    
    return 0;
}