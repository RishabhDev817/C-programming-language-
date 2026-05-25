#include <stdio.h>

int main() {
    int maths, physics, chemistry, biology;
    int totalMarks;
    float averagePercentage;
    char grade;

    printf("Enter marks for Maths (out of 100): ");
    scanf("%d", &maths);

    printf("Enter marks for Physics (out of 100): ");
    scanf("%d", &physics);

    printf("Enter marks for Chemistry (out of 100): ");
    scanf("%d", &chemistry);

    printf("Enter marks for Biology (out of 100): ");
    scanf("%d", &biology);

    totalMarks = maths + physics + chemistry + biology;
    averagePercentage = (float)totalMarks / 4.0;

    if (averagePercentage >= 90.0) {
        grade = 'A';
    } else if (averagePercentage >= 80.0) {
        grade = 'B';
    } else if (averagePercentage >= 70.0) {
        grade = 'C';
    } else if (averagePercentage >= 60.0) {
        grade = 'D';
    } else {
        grade = 'F';
    }
    printf("Results \n");
    printf("Total Marks: %d out of 400\n", totalMarks);
    printf("Average Percentage: %.2f%%\n", averagePercentage);
    printf("Final Grade: %c\n", grade);

    return 0;
}

