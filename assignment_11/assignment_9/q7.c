#include <stdio.h>

void cyclicSwap(int *a, int *b, int *c) {
    int temp = *a;
    *a = *b;
    *b = *c;
    *c = temp;
}

int main() {
    int a = 10, b = 20, c = 30;
    printf("Before swapping: a = %d, b = %d, c = %d\n", a, b, c);
    cyclicSwap(&a, &b, &c);
    printf("After swapping:  a = %d, b = %d, c = %d\n", a, b, c);
    return 0;
}