#include <stdio.h>

// Function to find the largest element
int findLargest(int arr[], int n) {
    int max = arr[0];   // Assume first element is max

    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];   // Update max if bigger value found
        }
    }
    return max;
}

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Function call
    int largest = findLargest(arr, n);

    printf("Largest element = %d\n", largest);

    return 0;
}