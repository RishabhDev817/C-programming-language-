#include <stdio.h>

// Structure definition
struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    struct Employee emp[5];   // Array of structure for 5 employees
    int i;

    // Input details for 5 employees
    printf("Enter details of 5 employees:\n");

    for (i = 0; i < 5; i++) {
        printf("\nEmployee %d\n", i + 1);

        printf("Name: ");
        scanf("%s", emp[i].name);

        printf("ID: ");
        scanf("%d", &emp[i].id);

        printf("Salary: ");
        scanf("%f", &emp[i].salary);
    }

    // Display details
    printf("\n\n--- Employee Details ---\n");
    for (i = 0; i < 5; i++) {
        printf("\nEmployee %d:\n", i + 1);
        printf("Name   : %s\n", emp[i].name);
        printf("ID     : %d\n", emp[i].id);
        printf("Salary : %.2f\n", emp[i].salary);
    }

    return 0;
}
