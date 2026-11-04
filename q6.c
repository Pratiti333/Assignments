#include <stdio.h>

static int x = 500;

void display() {
    printf("Inside display function, x = %d\n", x);
}

int main() {
    printf("Inside main function, x = %d\n", x);
    display();
    return 0;
}