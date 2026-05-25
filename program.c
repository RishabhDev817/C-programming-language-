#include <stdio.h>

int main(void) {
    int choice;
    double val;

    printf("Temperature Converter\n");
    printf("1) Fahrenheit to Celsius\n");
    printf("2) Celsius to Fahrenheit\n");
    printf("Enter choice (1 or 2): ");
    if (scanf("%d", &choice) != 1) return 1;

    if (choice == 1) {
        printf("Enter Fahrenheit: ");
        if (scanf("%lf", &val) != 1) return 1;
        double c = (val - 32.0) * 5.0 / 9.0;  // C = (F - 32) * 5/9 [12][6]
        printf("%.2f F = %.2f C\n", val, c);  // e.g., 100 F ≈ 37.78 C [6]
    } else if (choice == 2) {
        printf("Enter Celsius: ");
        if (scanf("%lf", &val) != 1) return 1;
        double f = (val * 9.0 / 5.0) + 32.0;  // F = C * 9/5 + 32 [12]
        printf("%.2f C = %.2f F\n", val, f);  // e.g., 0 C = 32 F [6][12]
    } else {
        printf("Invalid choice.\n");
    }
    return 0;
}