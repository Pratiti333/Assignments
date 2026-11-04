#include<stdio.h>
struct Date {
    int day;
    int month;
    int year;
};
struct employee {
    int emp_id;
    char name[20];
    struct Date jd;
    float salary;
};

int main()

{
    struct employee e[3];
    for(int i=0;i<3;i++)
    {
        printf("Enter employee id: ");
        scanf("%d",&e[i].emp_id);
        printf("Enter employee name: ");
        scanf("%s",e[i].name);
        printf("Enter joining date (dd mm yyyy): ");
        scanf("%d %d %d",&e[i].jd.day,&e[i].jd.month,&e[i].jd.year);
        printf("Enter salary: ");
        scanf("%f",&e[i].salary);
    }

    for(int i=0;i<3;i++)
    {
        printf("\nEmployee id: %d\n",e[i].emp_id);
        printf("Employee name: %s\n",e[i].name);
        printf("Joining date: %02d/%02d/%04d\n",e[i].jd.day,e[i].jd.month,e[i].jd.year);
        printf("Salary: %.2f\n",e[i].salary);
    }
}