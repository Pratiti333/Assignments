#include <stdio.h>

struct Student {
    int roll_no;
    char name[20];
    float marks[3];
};

float average(struct Student s) {
    return (s.marks[0] + s.marks[1] + s.marks[2]) / 3.0;
}
int main() {
    struct Student s1;
    s1.roll_no = 1;
    snprintf(s1.name, sizeof(s1.name), "John Doe");
    s1.marks[0] = 85.0;
    s1.marks[1] = 90.0;
    s1.marks[2] = 78.0;

    printf("Average marks of %s (Roll No: %d) is: %.2f\n", s1.name, s1.roll_no, average(s1));
    return 0;
}

