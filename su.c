#include<stdio.h>
/*int main(){
    int n , sum = 0;
     
    printf("enter a positive number : ");
    scanf("%d", &n);

    for(int i = 1; i <= n ; i++){
        sum += i ;   
    }
    printf("sum = %d", sum);
    return 0;
}*/
int main(){
    int n , sum = 0,i = 1;

    printf("Enter a positive number :");
    scanf("%d", &n);

    while(i <=n){
        sum += i;
        i++;
    }
    printf("sum = %d", sum);

    return 0;
}
