#include<stdio.h>

int main(void) {
    int a , b, c ;

    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c); 

    if(a>b && a>c){
        printf("%dis larrgest",a);
    } else if(b>a && b>c){
        printf("%dis largest",b);
    } else{
        printf("%dis largest",c);
    }  
    return 0;
}