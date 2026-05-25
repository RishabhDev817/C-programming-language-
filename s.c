#include<stdio.h>
int main()
{
    char str1[100], str2[100];
    int i=0, flag=0, len1=0, len2=0;
    
    printf("enter 1st string\n");
    scanf("%s",str1);
    printf("enter 2nd string\n");
    scanf("%s",str2);
    
    // Calculate length of str1
    for(i=0; str1[i]!='\0';i++)
    {
        len1++;
    }
    for(i=0; str2[i]!='\0';i++)
    {
        len2++;
    }
    
    if(len1!=len2){
        printf("string not same\n");
    }
    else{
        for(i=0;i<len1;i++)  
        {
            if(str1[i]!=str2[i]){
                flag=1;
                break;
            }
        }
        if(flag==1){
            printf("not same string\n");
        }
        else
        {
            printf("same string\n");
        }
    }
    flag=0;
    for(i=0;i<len1/2;i++)
    {
        if(str1[i]!=str1[len1-i-1]){
            flag=1;
            break;
        }
    }
    if(flag==1)
        printf("not palindrome\n");
    else 
        printf("palindrome\n");
    
    // Check if str2 is palindrome
    flag=0;
    for(i=0;i<len2/2;i++)
    {
        if(str2[i]!=str2[len2-i-1]){
            flag=1;
            break;
        }
    }
    if(flag==0)
        printf("palindrome\n");
    else 
        printf("not palindrome\n");
    
    return 0;
}
