#include <stdio.h>

#define STUDENTS 5

struct Student {
    int roll;
    char name[50];
    float m1, m2, m3;
    float total;
    float avg;
    char grade;
};

char calcGrade(float avg) {
    if (avg >= 90) return 'A';
    else if (avg >= 75) return 'B';
    else if (avg >= 60) return 'C';
    else if (avg >= 40) return 'D';
    else return 'F';
}

int main() {
    struct Student s[STUDENTS];
    FILE *fp;
    int i;

    // Input
    for (i = 0; i < STUDENTS; i++) {
        printf("Enter details of student %d\n", i + 1);

        printf("Roll No: ");
        scanf("%d", &s[i].roll);

        printf("Name (one word): ");
        scanf("%s", s[i].name);

        printf("Marks in 3 subjects: ");
        scanf("%f%f%f", &s[i].m1, &s[i].m2, &s[i].m3);

        s[i].total = s[i].m1 + s[i].m2 + s[i].m3;
        s[i].avg   = s[i].total / 3.0f;
        s[i].grade = calcGrade(s[i].avg);

        printf("\n");
    }

    // Open file
    fp = fopen("results.txt", "w");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    // Header for both file and screen
    printf("\nROLL\tNAME\tM1\tM2\tM3\tTOTAL\tAVG\tGRADE\n");
    fprintf(fp, "ROLL\tNAME\tM1\tM2\tM3\tTOTAL\tAVG\tGRADE\n");

    // Write and display all records
    for (i = 0; i < STUDENTS; i++) {
        printf("%d\t%s\t%.1f\t%.1f\t%.1f\t%.1f\t%.1f\t%c\n",
               s[i].roll, s[i].name,
               s[i].m1, s[i].m2, s[i].m3,
               s[i].total, s[i].avg, s[i].grade);

        fprintf(fp, "%d\t%s\t%.1f\t%.1f\t%.1f\t%.1f\t%.1f\t%c\n",
                s[i].roll, s[i].name,
                s[i].m1, s[i].m2, s[i].m3,
                s[i].total, s[i].avg, s[i].grade);
    }

    fclose(fp);
    printf("\nRecords stored in results.txt\n");

    return 0;
}
