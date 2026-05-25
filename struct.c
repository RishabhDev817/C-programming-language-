#include <stdio.h>

struct Point {
    int x;
};

// Pass by value (copy)
void passByValue(struct Point p) {
    p.x = 100;  // Change local copy only
    printf("Inside passByValue: x = %d\n", p.x);
}

// Pass by reference (pointer)
void passByReference(struct Point *p) {
    p->x = 100;  // Change actual struct using pointer
    printf("Inside passByReference: x = %d\n", p->x);
}

int main() {
    struct Point pt;
    pt.x = 10;
    
    passByValue(pt);
    printf("After passByValue: x = %d\n", pt.x);  // Still 10
    
    passByReference(&pt);
    printf("After passByReference: x = %d\n", pt.x);  // Changed to 100

    return 0;
}
