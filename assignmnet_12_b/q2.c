#include<stdio.h>
enum Result
{
    PASS=1,
    FAIL,
    DISTINCTION
};
    enum Result DisplayResult(float average)
    {
        while(1)
        {
            if(average>=75)
            {
                printf("Result: DISTINCTION\n");
                return DISTINCTION;
            }
            else if(average>=40)
            {
                printf("Result: PASS\n");
                return PASS;
            }
            else 
            {
                printf("Result: FAIL\n");
                return FAIL;
            }
        }
    }

    int main()
    {
        float marks;
        printf("Enter marks :");
        scanf("%f", &marks);
        DisplayResult(marks);
        return 0;
    }