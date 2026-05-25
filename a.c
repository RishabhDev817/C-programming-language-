#include<stdio.h>
int main(){
    int arr[3][3],i,j;

    for (int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("enter %d %d elements from row %d :"i,j,i+1);
            scanf("%d",&arr[i][j]);
        }
    }

}