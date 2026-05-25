#include <stdio.h>


int fact(int x); 

int main() {
    int n, f;
    printf("enter a number: ");
    scanf("%d", &n);
    
    
    f = fact(n); 
    
    printf("factorial of %d is %d\n", n, f);
    return 0; 
}

int fact(int x) 
{
    int F;
    
    
    if (x == 0 || x == 1) 
    {
        F = 1;
    }
    else
    {
        F = x * fact(x - 1); 
    }
    return F;
}