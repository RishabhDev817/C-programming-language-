#include<stdio.h>
int main()
{
    int age ; 
     
    printf("Enter age : ");
    scanf("%d", &age);

    if(age >= 18){
        printf("the person is eligible to vote \n");
    }else{
        printf("The person is not eligible to vote \n");
    }
    return 0;
}