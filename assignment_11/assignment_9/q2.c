
#include <stdio.h>

int isEven(int n) { return n % 2 == 0; }

void checkSign(int n) {
    if (n > 0) printf("Positive\n");
    else if (n < 0) printf("Negative\n");
    else printf("Zero\n");
}

int isPrime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int isPerfect(int n) {
    if (n <= 0) return 0;
    int sum = 0;
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) sum += i;
    }
    return sum == n;
}

void classifyNumber(int n) {
    printf("--- Classification Report for %d ---\n", n);
    printf("Parity: %s\n", isEven(n) ? "Even" : "Odd");
    printf("Sign: ");
    checkSign(n);
    printf("Prime Status: %s\n", isPrime(n) ? "Prime" : "Not Prime");
    printf("Perfect Number Status: %s\n", isPerfect(n) ? "Perfect" : "Not Perfect");
}

int main() {
    classifyNumber(28);
    printf("\n");
    classifyNumber(17);
    return 0;
}
