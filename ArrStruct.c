#include <stdio.h>

// Structure definition
struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student s[3];   // Array of structure for 3 students
    int i;

    // Input details for each student
    for (i = 0; i < 3; i++) {
        printf("\nEnter details of student %d:\n", i + 1);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Roll Number: ");
        scanf("%d", &s[i].roll);

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    // Display all student details
    printf("\n\n--- Student Information ---\n");
    for (i = 0; i < 3; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Name        : %s\n", s[i].name);
        printf("Roll Number : %d\n", s[i].roll);
        printf("Marks       : %.2f\n", s[i].marks);
    }

    return 0;
}
