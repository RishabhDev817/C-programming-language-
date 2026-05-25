#include <stdio.h>

struct Student {
    char name[50];
    int rollNo;
};

void updateRollNo(struct Student *s, int newRollNo) {
    s->rollNo = newRollNo;  // Modify rollNo using pointer
}

int main() {
    struct Student s1 = {"Rishabh", 101};
    printf("Before update: %d\n", s1.rollNo);

    updateRollNo(&s1, 202);
    printf("After update: %d\n", s1.rollNo);

    return 0;
}
