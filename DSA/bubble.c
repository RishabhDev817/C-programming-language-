#include<stdio.h>
int main()
{
    int a[100];
    int i,j,temp,n;

    printf("Enter numbers of elements :");
    scanf("%d",&n);
    printf("Enter %d number : ",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<n-1;j++){
            if(a[j]>a[j+1]){
                temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("After sortinig : \n");
    for(i=0;i<n;i++){
        printf("%d",a[i]);
    }
}