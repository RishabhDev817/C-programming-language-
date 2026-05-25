#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *p;

    p = arr;                // p points to arr[0]

    printf("Initial value  : %d\n", *p);      // 10

    p++;                    // increment pointer (move to next element)
    printf("After p++      : %d\n", *p);      // 20

    p = p + 2;              // add 2 (jump two elements ahead)
    printf("After p = p+2  : %d\n", *p);      // 40

    p--;                    // decrement pointer (move back one element)
    printf("After p--      : %d\n", *p);      // 30

    p = p - 2;              // subtract 2 (go back two elements)
    printf("After p = p-2  : %d\n", *p);      // 10

    return 0;
}
