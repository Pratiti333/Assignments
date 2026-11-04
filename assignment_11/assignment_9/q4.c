#include <stdio.h>

int gcdTwo(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int gcdThree(int a, int b, int c) {
    return gcdTwo(gcdTwo(a, b), c);
}

int lcmTwo(int a, int b) {
    return (a * b) / gcdTwo(a, b);
}

int lcmThree(int a, int b, int c) {
    return lcmTwo(lcmTwo(a, b), c);
}

int main() {
    int a = 12, b = 18, c = 24;
    printf("Numbers: %d, %d, %d\n", a, b, c);
    printf("GCD: %d\n", gcdThree(a, b, c));
    printf("LCM: %d\n", lcmThree(a, b, c));
    return 0;
}