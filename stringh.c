#include <stdio.h>
#include <string.h>

int main() {
    char str1[100];
    char str2[100];
    printf("enter first str1:");
    scanf("%s",str1);

    printf("enter second str2:");
    scanf("%s",str2);
     
    strrev(str1);
    strrev(str2);
        printf("reverse string is %s",str1);
        printf("reverse string is %s",str2);
    
    
return 0;
}
