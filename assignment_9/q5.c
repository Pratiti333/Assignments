#include <stdio.h>

float calculateTotal(float m1, float m2, float m3, float m4, float m5) {
    return m1 + m2 + m3 + m4 + m5;
}

float calculatePercentage(float total) {
    return total / 5.0;
}

int hasPassedAll(float m1, float m2, float m3, float m4, float m5) {
    return (m1 >= 40 && m2 >= 40 && m3 >= 40 && m4 >= 40 && m5 >= 40);
}

char calculateGrade(float percentage, int passedAll) {
    if (!passedAll) return 'F';
    if (percentage >= 90) return 'A';
    if (percentage >= 75) return 'B';
    if (percentage >= 60) return 'C';
    if (percentage >= 50) return 'D';
    return 'E';
}

int main() {
    float m1 = 85, m2 = 78, m3 = 92, m4 = 65, m5 = 88;
    float total = calculateTotal(m1, m2, m3, m4, m5);
    float percentage = calculatePercentage(total);
    int passed = hasPassedAll(m1, m2, m3, m4, m5);
    char grade = calculateGrade(percentage, passed);

    printf("Total Marks: %.2f / 500\n", total);
    printf("Percentage: %.2f%%\n", percentage);
    printf("Status: %s\n", passed ? "Passed all subjects" : "Failed");
    printf("Grade: %c\n", grade);
    return 0;
}