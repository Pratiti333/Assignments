#include<stdio.h>


static float balance = 1000.0;

void deposit(float amt) {
    balance = balance + amt;
    printf("Amount Deposited: %.2f\n", amt);
}

void withdraw(float amt) {
    if(amt <= balance) {
        balance = balance - amt;
        printf("Amount Withdrawn: %.2f\n", amt);
    } else {
        printf("Low balance! Cannot withdraw.\n");
    }
}

void showBalance() {
    printf("Current Balance is: %.2f\n\n", balance);
}