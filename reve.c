#include <stdio.h>
#include <string.h>
int main(){

char str1[10],char str2[10];
printf("enter first string");
scanf("%s",str1);

printf("enter second string");
scanf("%s,str2");

strrev(str1,str2);

 printf("reverse string is %s",str1);
 printf("reverse string is %s",str2);
  return 0;
}
