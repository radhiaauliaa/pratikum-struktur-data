//created by Radhia Aulia Nisa 23343049

#include <stdio.h>
#include <stdbool.h>

#define MAX 7

int intArray[MAX] = {4,6,3,2,1,9,7};

void printline(int count) {
    int i;
    for(i = 0; i < count - 1; i++) {
        printf("=");
    }
    printf("=\n");
}

void display() {
    int i;
    printf("[");
    for(i = 0; i < MAX; i++) {
        printf("%d ", intArray[i]);
    }
    printf("]\n");
}

void insertionSort() {
    int valueToInsert;
    int holePosition;
    int i;

    for(i = 1; i < MAX; i++) {
        // Select a value to be inserted
        valueToInsert = intArray[i];
        // Select the hole position where the number is to be inserted
        holePosition = i;

        // Check if the previous number is larger than the value to be inserted
        // If so, shift the larger number to the right
        while (holePosition > 0 && intArray[holePosition - 1] > valueToInsert) {
            intArray[holePosition] = intArray[holePosition - 1];
            holePosition--;
            printf("Item moved: %d\n", intArray[holePosition]);
        }

        // If the hole position is not equal to the current position,
        // insert the value at the hole position
        if (holePosition != i) {
            printf("Item inserted: %d, at position: %d\n", valueToInsert, holePosition);
            intArray[holePosition] = valueToInsert;
        }

        printf("Iteration %d: ", i);
        display();
    }
}

int main() {

    printf("Input Array: ");
    display();
    printline(50);
    insertionSort();

    printf("Output Array: ");
    display();
    printline(50);

    return 0;
}

