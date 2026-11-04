#include<stdio.h>
enum calculator
{
    ADD=1,
    SUBTRACT,
    MULTIPLY,
    DIVIDE,
    EXIT
};
int main()
{
    enum calculator ch;
    float n1,n2,result;
    while(1)
    {
        printf("What operation is to be performed?\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Enter your choice (1-5): ");
        scanf("%d", &ch);
        if(ch==EXIT)
        {
            printf("Exiting the program.\n");
            break;
        }
        printf("Enter two numbers: ");
        scanf("%f %f", &n1, &n2);
        switch(ch)
        {
            case ADD:
                result = n1 + n2;
                printf("Result: %.2f\n", result);
                break;
            case SUBTRACT:
                result = n1 - n2;
                printf("Result: %.2f\n", result);
                break;
            case MULTIPLY:
                result = n1 * n2;
                printf("Result: %.2f\n", result);
                break;
            case DIVIDE:
                if(n2 != 0)
                {
                    result = n1 / n2;
                    printf("Result: %.2f\n", result);
                }
                else
                {
                    printf("Error: Division by zero is not allowed.\n");
                }
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
        result = 0;
    }
}
