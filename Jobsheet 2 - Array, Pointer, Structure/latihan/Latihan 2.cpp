//created by Radhia Aulia Nisa 23343049
#include <stdio.h>

int main() {
    int n[10];
    int i, j;
    
    // Initialize the array elements
    for (i = 0; i < 10; i++) {
        n[i] = i + 100;
    }
    
    // Print the array elements
    for (j = 0; j < 10; j++) {
        printf("Element[%d] = %d\n", j, n[j]);
    }
    
    return 0;
}

