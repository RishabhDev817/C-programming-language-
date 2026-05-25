#include <stdio.h>
float average(float a,float b,float c);

int main()
{
    float a=120;
    float b=250;
    float c=555;
    printf("the average of three numbers is %.2f",average(a,b,c));
    return 0;
}
float average(float a,float  b,float c)
{
    return((a+b+c)/3);
}
