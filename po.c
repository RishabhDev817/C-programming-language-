#include <stdio.h>

int main() {
    
    int a = 10;            
    int *ptr = &a;         
    int **p = &ptr;        

    
    printf("--- Left Column Results ---\n");
    printf("a     = %d\n", a);         
    printf("&a    = %p\n", (void*)&a);  
    printf("ptr   = %p\n", (void*)ptr); 
    printf("&ptr  = %p\n", (void*)&ptr); 
    printf("*ptr  = %d\n", *ptr);       

   
    printf("p     = %p\n", (void*)p);   
    printf("&p    = %p\n", (void*)&p);  
    printf("*p    = %p\n", (void*)*p);  
    printf("**p   = %d\n", **p);      

    return 0;
}