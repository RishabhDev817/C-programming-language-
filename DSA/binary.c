#include<stdio.h>
int main(){
    int a[20],l=0,r,search,i,m,N;

    printf("Enter a range ");
    scanf("%d", &N);
    r=N-1;

    printf("Enter%dnumbers:",N);
    for(i=0;i<N;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter a number that you want to search :");
    scanf("%d",&search);

    while(l<=r){
        m=(l+r)/2;

        if(a[m]==search){
            printf("Number found at position %d \n",m+1);
            return 0;
        }else if(a[m]<search){
            l=m+1;
        }else{
            r=m-1;
        }
    }
    printf("Number not found in the list ");
    return 0;
}