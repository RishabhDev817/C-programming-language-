#include<stdio.h>
int main(){
    int choice ;
    float temp , converted_temp ;

    printf("Enter 1 for celcius to fahrenheit  or 2 for fahrenheit to celcius : ");
    scanf("%d", &choice);

    printf("Enter temperature :");
    scanf("%f", &temp);

    if(choice == 1)
    {
        converted_temp =(temp * 9.0 / 5.0)+32.0;
        printf("converted to Fahrenheit : %.2f",converted_temp);
    }else if(choice == 2)
    { 
        converted_temp =(temp-32)*5.0/9.0;
        printf("converted to celcius : %.2f", converted_temp);
    }else{
        printf("Invalid choice ");
    }
    return 0;
}

