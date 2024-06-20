//created by Radhia Aulia Nisa 23343049

#include <stdio.h>
#include <stdlib.h>

int isPrime(int num) {
    if (num <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n, m, count = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int *primeNumbers = (int*) malloc(sizeof(int));
    for (int i = 2; count < n; i++) {
        if (isPrime(i)) {
            primeNumbers[count] = i;
            count++;
            if (count % m == 0) {
                primeNumbers = (int*) realloc(primeNumbers, sizeof(int) * (count + m));
            }
        }
    }
    printf("Prime numbers from 1 to %d are: \n", n);
    for (int i = 0; i < n; i++) {
        printf("%d ", primeNumbers[i]);
    }
    free(primeNumbers);
    return 0;
}
