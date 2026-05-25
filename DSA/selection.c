#include<stdio.h>
int main()
{
    int a[20],n;
    int i , j , index , temp , min ;

    printf("Enter number of elements :");
    scanf("%d",&n);
    printf("Enter %d numbers : ",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++){
        min=a[i];
        index=i;
        for(j=i+1;j<n;j++){
            if(min > a[j]){
                min=a[j];
                index=j;
            }
        }
        temp=a[i];
        a[i]=a[index];
        a[index]=temp;
    }
    printf("After sorting : \n");
    for(i=0;i<n;i++){
        printf("%d",a[i]);
    }
}