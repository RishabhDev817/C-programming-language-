#include<stdio.h>
int main(void)
{
    int side1 , side2 , side3 ;
    printf("Enter three sides of the triangle : ");
    scanf("%d %d %d", &side1 , &side2 , &side3);

    if(side1 == side2 && side2 == side3 && side1 == side3)
    {
    printf("\n This is an Equilateral Triangle.");
    }
        else if(side1 == side2 || side2 == side3 || side1 == side3)
        {
        printf("\n This is an Isoceles Triangle.");
        }
    else {
        printf("This is a Scalen Triangle.");
    }
    return 0 ;
}