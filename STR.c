#include <stdio.h>
#include <string.h>

int main() {
    char str1[50], str2[50], str3[100];
    int length, result;

    // Input strings
    printf("Enter first string: ");
    gets(str1);   // For simplicity (unsafe). Prefer fgets() in real programs.

    printf("Enter second string: ");
    gets(str2);

    // 1. String Length (strlen)
    length = strlen(str1);
    printf("\nLength of first string = %d\n", length);

    // 2. String Copy (strcpy)
    strcpy(str3, str1);
    printf("After copying str1 into str3: %s\n", str3);

    // 3. String Concatenation (strcat)
    strcat(str3, str2);
    printf("After concatenating str2 to str3: %s\n", str3);

    // 4. String Compare (strcmp)
    result = strcmp(str1, str2);
    if (result == 0)
        printf("Strings are equal.\n");
    else if (result > 0)
        printf("str1 is greater than str2.\n");
    else
        printf("str1 is smaller than str2.\n");

    return 0;
}
