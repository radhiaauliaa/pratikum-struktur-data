//created by Radhia Aulia Nisa 23343049

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *fib, i, n, c;

    printf("Enter the number of terms you want to display: ");
    scanf("%d", &n);

    fib = (int *)malloc(n * sizeof(int));
    if (fib == NULL) {
        printf("Memory error\n");
        return 0;
    }

    fib[0] = 0;
    fib[1] = 1;

    for (i = 2; i < n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    printf("Fibonacci sequence: ");
    for (c = 0; c < n; c++) {
        printf("%d ", fib[c]);
    }

    free(fib);

    return 0;
}
