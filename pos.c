#include <stdio.h>

int main() {
    int number;
    printf("Enter a number to check positive, negative, or zero: ");
    scanf("%d", &number);

    if (number > 0) {
        printf("is positive\n");
    }
    else if (number < 0) {
        printf("is negative\n");
    }
    else {
        printf("is zero\n");
    }

    return 0;
}