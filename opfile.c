#include <stdio.h>

int main() {
    FILE *fp;
    char ch;

    // Create a file and write data
    fp = fopen("random.txt", "w+");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    // Write some text
    fputs("Hello Students!", fp);

    // Random access: Move pointer to the 6th byte (index 5)
    fseek(fp, 5, SEEK_SET);

    // Read the character at that position
    ch = fgetc(fp);
    printf("Character at position 5: %c\n", ch);

    // Random access: Move pointer to end and show current position
    fseek(fp, 0, SEEK_END);
    long pos = ftell(fp);
    printf("Current position (file size): %ld bytes\n", pos);

    // Move pointer to start and read full content
    fseek(fp, 0, SEEK_SET);
    printf("\nFull content of file:\n");

    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }

    fclose(fp);

    return 0;
}
