#include <stdio.h>
#define SIZE 5  // Size of queue = 5

int rear = -1;
int front = -1;
int queue[SIZE];

// Function Enqueue definition
void Enqueue(int x) {
    if (rear == SIZE + 1) {          // i) Overflow
        printf("Overflow");
    }
    else if (rear == -1 && front == -1) {  // ii) Empty queue
        rear = front = 0;
        queue[rear] = x;
    }
    else {                           // iii) Add elements after queue created
        rear++;                      // increase rear & add element in the queue
        queue[rear] = x;
    }
}

// Dequeue (delete) function definition
void Dequeue() {
    if (front == -1 && rear == -1) {   // i) Queue is empty (underflow)
        printf("Underflow");
    }
    else if (front == rear) {          // ii) Both front & rear point same location
        printf("The deleted element = %d", queue[front]);
        front = rear = -1;             // iii) delete
    }
    else {
        printf("The deleted element = %d\n", queue[front]);
        front++;
    }
}

// Display
void display() {
    int i = 0;                         // Start from front & reach till rear
    for (i = front; i <= rear; i++) {
        printf(" %d", queue[i]);
    }
}

// Main function to test the queue
int main() {
    int choice, value;

    printf("Queue Operations\n");
    printf("1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n");

    while (1) {
        printf("\nEnter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value: ");
                scanf("%d", &value);
                Enqueue(value);
                break;
            case 2:
                Dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                return 0;
            default:
                printf("Invalid choice");
        }
    }
    return 0;
}