#include<stdio.h>
enum datatype
{
    INT=1,
    FLOAT,
    CHAR
};

union Data
{
    int i;
    float f;
    char c;
};
struct value
{
    enum datatype type;
    union Data data;
};

int main()
{
    struct value v;
    printf("Enter data type (1 for int, 2 for float, 3 for char): ");
    scanf("%d", &v.type);
    switch(v.type)
    {
        case INT:
            printf("Enter an integer: ");
            scanf("%d", &v.data.i);
            printf("You entered: %d\n", v.data.i);
            break;
        case FLOAT:
            printf("Enter a float: ");
            scanf("%f", &v.data.f);
            printf("You entered: %.2f\n", v.data.f);
            break;
        case CHAR:
            printf("Enter a character: ");
            scanf(" %c", &v.data.c);
            printf("You entered: %c\n", v.data.c);
            break;
        default:
            printf("Invalid data type!\n");
    }
    return 0;
}
