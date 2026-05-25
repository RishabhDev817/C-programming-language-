#include <stdio.h>

int main() {
    int n, i = 1, sum = 0;

    printf("Enter a positive integer N: ");
    scanf("%d", &n);

    while (i <= n) {
        sum = sum + i;   // add current i to sum
        i = i + 1;       // move to next number
    }

    printf("Sum of first %d natural numbers = %d\n", n, sum);

    return 0;
}