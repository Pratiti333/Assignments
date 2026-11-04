#include<stdio.h>
int x=300;

int main()
{
    auto x=100;
    printf("Inside main=%d\n",x);
    {
        auto x=200;
        printf("Inside inner block=%d\n",x);
    }
    printf("After inner block=%d\n",x);
    return 0;
}