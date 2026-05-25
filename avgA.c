#include<stdio.h>
void avg(float a,float b,float c);
int main(){
    float x,y,z,avg;
    printf("enter three numbers:");
    scanf("%f%f%f",&x,&y,&z);
    avg(x,y,z);
    return0;
}
void avg(float a,float b,float c)
{
    float avg;
    avg=(a+b+c)/3.0;
    printf("average of three no=%.2f",avg);
}

    

    

