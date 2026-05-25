#include<stdio.h>
int main()
{
int n;
int r;
int reverse=0;
int temp;
printf("Enter number to check palindrome or not\n");
scanf("%d",&n);
temp = n;
while(n>0)
{
r = n%10;
reverse = (reverse*10)+r;
n = n/10;
}
if(temp == reverse){
printf("Number is palindrome \n");
}else{
}printf("Number is NOT palindrome\n");
return 0;
}