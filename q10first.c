#include<stdio.h>


void deposit(float amt);
void withdraw(float amt);
void showBalance();

int main()
 {
    printf("--- Bank Account Management ---\n\n");
    
    
    showBalance();
    
    
    deposit(500.0);
    showBalance();
    

    withdraw(200.0);
    showBalance();
    
    return 0;
}