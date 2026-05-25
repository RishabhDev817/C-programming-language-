#include<stdio.h>
#include<string.h>

int main(){
    char str[50];

    printf("enter a string :");
    scanf("%s", str);

    strrev(str);

    printf("Reversed string : %s ", str);
        
    return 0;
}