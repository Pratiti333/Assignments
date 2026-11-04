#include<stdio.h>
struct student
{
    char name[20];
    int roll;
    float m[3];
    char garde;
};
void displayStudent(struct student s)
{
    printf("Name: %s\n", s.name);
    printf("Roll Number: %d\n", s.roll);
    printf("Marks: %.2f, %.2f, %.2f\n", s.m[0], s.m[1], s.m[2]);
    printf("Grade: %c\n", s.garde);
}
float totalMarks(struct student s)
{
    return s.m[0] + s.m[1] + s.m[2];
}
void updateGrade(struct student *s,char grade)
{
    s->garde = grade;
}

int main()
{
    struct student s1;
    printf("Enter name: ");
    scanf("%s", s1.name);
    printf("Enter roll number: ");
    scanf("%d", &s1.roll);
    printf("Enter marks for 3 subjects: ");
    for(int i=0; i<3; i++)
    {
        scanf("%f", &s1.m[i]);
    }
    updateGrade(&s1, 'A');
    displayStudent(s1);
    printf("Total Marks: %.2f\n", totalMarks(s1));
    sizeof(s1);
    printf("Size of student structure: %zu bytes\n", sizeof(s1));
    return 0;
}