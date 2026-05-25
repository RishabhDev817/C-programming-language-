#include<stdio.h>
#include<math.h>

float squareArea(float side); 
float circleArea(float radius);
float rectangleArea(float a , float b);

int main(){
    float a = 8.0;
    float b = 4.0;

    printf("area of rectangle is : %f \n", rectangleArea(a , b));

    float radius = 4.0;
    
    printf("area of circle is : %f \n", circleArea(radius));

    float side = 6.0;

    printf("area of square is : %f", squareArea(side));
    return 0;
    
}

float squareArea(float side){
    return side * side;
}
float circleArea(float radius){
    return 3.14 * radius * radius;
}
float rectangleArea(float a , float b){
    return a * b ;
}