#include <stdio.h>

// Structure definition
struct Student {
    char name[50];
    int roll;
    float marks[3];   // marks in 3 subjects
    float total;
    float average;
};

int main() {
    struct Student s;
    struct Student *ptr = &s;   // pointer to structure
    int i;

    // Input
    printf("Enter student name: ");
    scanf("%s", ptr->name);

    printf("Enter roll number: ");
    scanf("%d", &ptr->roll);

    printf("Enter marks of 3 subjects:\n");
    ptr->total = 0;
    
    for (i = 0; i < 3; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%f", &ptr->marks[i]);
        ptr->total += ptr->marks[i];
    }

    // Calculate average
    ptr->average = ptr->total / 3.0;

    // Output
    printf("\n--- Student Result ---\n");
    printf("Name        : %s\n", ptr->name);
    printf("Roll Number : %d\n", ptr->roll);
    printf("Total Marks : %.2f\n", ptr->total);
    printf("Average     : %.2f\n", ptr->average);

    return 0;
}
