#include<stdio.h>
#include<string.h>

int main(){
    char str1[50], str2[50];
    int result;

    printf("enter first string : ");
    scanf("%s", str1);

    printf("enter second string : ");
    scanf("%s", str2);

    result = strcmp(str1 , str2 );

    if(result == 0){
        printf("both strings are equal ");
    }else {
        printf("both strings are not equal ");
    }
    return 0;
}