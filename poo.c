#include <stdio.h>

int main() {
    
    
    int a[5] = {1, 2, 3, 4, 5};
    int *ptr;
    
    ptr = &a[0]; 
    
    for(int i = 0; i < 5; i++) {
        
        printf("\na[%d]: the value is %d and address = %u", i, *ptr,ptr);
        
        ptr++; 
    }

    return 0;
}