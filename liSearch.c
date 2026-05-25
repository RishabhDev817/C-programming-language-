#include <stdio.h>

int main() {
    int n, i, key, found = 0;

    printf("Enter Size of Array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &key);

    printf("Positions where %d is found:\n", key);

    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("Position %d\n", i + 1);
            found = 1;
        }
    }

    if (!found) {
        printf("%d not found in the array\n", key);
    }

    return 0;
}
