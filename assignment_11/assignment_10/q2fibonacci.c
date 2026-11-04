#include <stdio.h>

int fibonacci(int n);

int main() {
    int i, n;
    
    printf("Enter the number of terms: ");
    if (scanf("%d", &n) != 1 || n < 0) {
        printf("Please enter a valid non-negative integer.\n");
        return 1;
    }
    
    for (i = 0; i <= n; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
    
    return 0;
}

int fibonacci(int n) {
    if (n == 0 || n == 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}