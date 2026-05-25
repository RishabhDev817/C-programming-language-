#include<stdio.h>
int main(){
    int array[100];
    int i, n, position;

    printf("enter the number of elements :");
    scanf("%d",&n);

    printf("enter %d elements :",n);
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    printf("Enter the position of delete : ");
    scanf("%d",&position);
     
    if(position < 1 || position > n){
        printf("Invalid position \n");
    }else{
        for(i = position-1; i<n-1;i++){
            array[i] = array[i+1];
        }
        n--;
        printf("final array after deletion:\n");
        for(i=0;i<n;i++){
            printf("%d",array[i]);
        }
        printf("\n");
    }
    return 0;
}