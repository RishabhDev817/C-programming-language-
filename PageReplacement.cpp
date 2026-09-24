#include<stdio.h>

int main(){
    int n, capacity;

    printf("Enter the number of frames: ");
    scanf("%d", &capacity);
    printf("Enter total number of pages: ");
    scanf("%d", &n);

    int pages[n], frames[capacity];

    int fault = 0;
    int index = 0;

    for(int i = 0; i < capacity; i++){
        frames[i] = -1;
    }

    printf("Enter the page reference string: ");
    for(int i = 0; i < n; i++){
        scanf("%d", &pages[i]);
    }

    printf("\nExecution steps:\n"); ");

    for(int i = 0 ; i<n ; i++){
        int page = pages[i];
        int hit =0;
        }
}