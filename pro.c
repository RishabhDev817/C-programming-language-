#include <stdio.h>

int main(void) {
    int a = 10, b = 3;

    // Arithmetic
    printf("Arithmetic:\n");
    printf("a + b = %d\n", a + b);         // 13 [2]
    printf("a - b = %d\n", a - b);         // 7 [2]
    printf("a * b = %d\n", a * b);         // 30 [2]
    printf("a / b = %d\n", a / b);         // 3 (integer division) [2]
    printf("a %% b = %d\n\n", a % b);      // 1 [2]

    // Relational
    printf("Relational:\n");
    printf("a < b  -> %d\n", a < b);       // 0 (false) [1][5]
    printf("a > b  -> %d\n", a > b);       // 1 (true) [1][5]
    printf("a == b -> %d\n", a == b);      // 0 (false) [1][5]
    printf("a != b -> %d\n\n", a != b);    // 1 (true) [1][5]

    // Logical
    int x = 1, y = 0;
    printf("Logical:\n");
    printf("x && y -> %d\n", x && y);      // 0 (AND) [2]
    printf("x || y -> %d\n", x || y);      // 1 (OR) [2]
    printf("!x     -> %d\n", !x);          // 0 (NOT) [2]

    return 0;
}
