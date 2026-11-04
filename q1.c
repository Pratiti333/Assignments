#include<stdio.h>
void display();
void display()
{
   auto x=25;
   printf("Outside inner block+%d\n",x);
   {
    auto x=10;
    printf("Inside inner block=%d\n",x);
   }
   printf("After inner block=%d\n",x);

    
}
int main()
{
    display();
    return 0;
}