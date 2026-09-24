#include <stdio.h>

int main() {
    int n, i, j, temp;

    printf("Enter number of processes: ");
    scanf("%d", &n);

    int p[n], BT[n];

    printf("Enter the Burst Time for processes\n");
    for(i = 0; i < n; i++) {
        p[i] = i + 1;
        printf("P%d: ", p[i]);
        scanf("%d", &BT[i]);
    }

   
    for(i = 0; i < n - 1; i++) {
        for(j = i+1; j < n ; j++) {
            if(BT[j] < BT[i]) {
                temp = BT[j];
                BT[j] = BT[i];
                BT[i] = temp;

                temp = p[j];
                p[j] = p[i];
                p[i] = temp;
            }
        }
    }

    printf("\nSorted Order (Shortest Job First):\n");
    printf("Process\tBurst Time\n");
    for(i = 0; i < n; i++) {
        printf("P%d\t%d\n", p[i], BT[i]);
    }

    return 0;
}
