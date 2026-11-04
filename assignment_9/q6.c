#include <stdio.h>

void calculateArithmetic(int a, int b, int *sum, int *diff, int *prod, float *quot) {
    *sum = a + b;
    *diff = a - b;
    *prod = a * b;
    if (b != 0) {
        *quot = (float)a / b;
    } else {
        *quot = 0;
        printf("Warning: Division by zero!\n");
    }
}

int main() {
    int x = 25, y = 4;
    int sum, diff, prod;
    float quot;

    calculateArithmetic(x, y, &sum, &diff, &prod, &quot);

    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", diff);
    printf("Product: %d\n", prod);
    printf("Quotient: %.2f\n", quot);
    return 0;
}