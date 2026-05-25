#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    int m1, m2, m3;
    int total;
    float avg;
    char grade;
};

char getGrade(float avg) {
    if (avg >= 90) return 'A';
    else if (avg >= 75) return 'B';
    else if (avg >= 60) return 'C';
    else if (avg >= 40) return 'D';
    else return 'F';
}

int main() {
    struct Student s[5];
    FILE *fp;
    int i;

    for (i = 0; i < 5; i++) {
        printf("Roll, Name, Marks in 3 subjects for student %d:\n", i + 1);
        scanf("%d", &s[i].roll);
        scanf("%s", s[i].name);              // single-word name
        scanf("%d%d%d", &s[i].m1, &s[i].m2, &s[i].m3);

        s[i].total = s[i].m1 + s[i].m2 + s[i].m3;
        s[i].avg = s[i].total / 3.0f;
        s[i].grade = getGrade(s[i].avg);
    }

    fp = fopen("results.txt", "w");
    if (fp == NULL) {
        printf("File error\n");
        return 1;
    }

    for (i = 0; i < 5; i++) {
        fprintf(fp, "%d %s %d %d %d %d %.2f %c\n",
                s[i].roll, s[i].name,
                s[i].m1, s[i].m2, s[i].m3,
                s[i].total, s[i].avg, s[i].grade);
    }
    fclose(fp);

    return 0;
}
