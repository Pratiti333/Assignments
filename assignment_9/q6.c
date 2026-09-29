#include<stdio.h>
void calculate(int a; int b; int *sum; int *diff; int *prod; float *quot)
{
    *sum = a + b;
    *diff = a - b;
    *prod = a * b;
    if(b != 0)
        *quot = (float)a / b;
    // Handle division by zero
}
 
int main()
{
    int num1, num2, sum, diff, prod;
    float quot;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    calculate(num1, num2, &sum, &diff, &prod, &quot);

    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", diff);
    printf("Product: %d\n", prod);
    if(num2 != 0)
        printf("Quotient: %.2f\n", quot);
    else
        printf("Quotient: Division by zero error\n");

    return 0;
}