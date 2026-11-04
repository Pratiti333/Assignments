#include<stdio.h>
enum day
{
    MONDAY=1,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY
};

        int main()

        {
            enum day Day;
            printf("Enter a day number (1-7): ");
            scanf("%d", &Day);
            switch(Day)
            {
                case MONDAY:
                    printf("Monday\n");
                    break;
                case TUESDAY:
                    printf("Tuesday\n");
                    break;
                case WEDNESDAY:
                    printf("Wednesday\n");
                    break;
                case THURSDAY:
                    printf("Thursday\n");
                    break;
                case FRIDAY:
                    printf("Friday\n");
                    break;
                case SATURDAY:
                    printf("Saturday\n");
                    break;
                case SUNDAY:
                    printf("Sunday\n");
                    break;
                default:
                    printf("Invalid day number!\n");
            }
            return 0;
        }