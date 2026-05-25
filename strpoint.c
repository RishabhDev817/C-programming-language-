#include <stdio.h>

int main() {
    char str[100];
    char *ptr;

    ptr = str;   // pointer pointing to the string array

    printf("Enter a string: ");
    fgets(ptr, 100, stdin);   // reading string using pointer

    printf("You entered: ");
    while (*ptr != '\0') {    // printing using pointer
        printf("%c", *ptr);
        ptr++;
    }

    return 0;
}
