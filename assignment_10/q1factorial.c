#include<stdio.h>
int factorial(int n);
int main()
{
int n,fac;
printf("Enter a number: ");
scanf("%d",&n);
fac=factorial(n);   
printf("Factorial of %d is %d",n,fac);
return 0;
}

int factorial(int n)
{
    if(n==0 || n==1)
        return 1;
    else
        return n*factorial(n-1);
}