#include <stdio.h>

int sumOfDigits(int n) {
    if (n < 0) n = -n;
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int countDigits(int n) {
    if (n == 0) return 1;
    if (n < 0) n = -n;
    int count = 0;
    while (n > 0) {
        count++;
        n /= 10;
    }
    return count;
}

int reverseInteger(int n) {
    int rev = 0, rem;
    int sign = (n < 0) ? -1 : 1;
    if (n < 0) n = -n;
    while (n > 0) {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }
    return rev * sign;
}

int isPalindrome(int n) {
    if (n < 0) return 0;
    return n == reverseInteger(n);
}

int main() {
    int num = 12321;
    printf("Number: %d\n", num);
    printf("Sum of digits: %d\n", sumOfDigits(num));
    printf("Count of digits: %d\n", countDigits(num));
    printf("Reversed number: %d\n", reverseInteger(num));
    printf("Palindrome Status: %s\n", isPalindrome(num) ? "Yes" : "No");
    return 0;
}