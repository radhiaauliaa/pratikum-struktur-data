//created by Radhia Aulia Nisa 23343049

#include <stdio.h>
#include <stdbool.h>

#define MAX 5 

int list[MAX] = {5, 2, 3, 4, 1}; 

void display() {
    for (int i = 0; i < MAX; i++) {
        printf("%d ", list[i]);
    }
    printf("\n");
}

void bubbleSort() {
    int temp;
    bool swapped = false;

    // Loop through all numbers
    for (int i = 0; i < MAX - 1; i++) {
        swapped = false;
        // Loop through numbers falling ahead
        for (int j = 0; j < MAX - 1 - i; j++) {
            printf("Items compared: [ %d, %d ] ", list[j], list[j + 1]);
            // Check if next number is lesser than current no
            // Swap the numbers.
            // (Bubble up the highest number)
            if (list[j] > list[j + 1]) {
                temp = list[j];
                list[j] = list[j + 1];
                list[j + 1] = temp;
                swapped = true;
                printf("=> swapped [%d, %d]\n", list[j], list[j + 1]);
            } else {
                printf("=> not swapped\n");
            }
        }
        // If no number was swapped that means
        // array is sorted now, break the loop.
        if (!swapped) {
            break;
        }

        printf("Iteration %d#: ", (i + 1));
        display();
    }
}

int main() {
    printf("Input Array: ");
    display();
    printf("\n");
    bubbleSort();
    printf("\nOutput Array: ");
    display();
    return 0;
}

