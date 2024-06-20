//created by Radhia Aulia Nisa 23343049

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define MAX 20

void InsertionSort(int arr[]) {
    int i, j, key;
    for (i = 1; i < MAX; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) { 
            arr[j + 1] = arr[j]; 
            j--;
        }
        arr[j + 1] = key; 
    }
}

int main() {
    int data_awal[MAX], data_urut[MAX];
    int i;
    time_t k1, k2;
    
    printf("Sebelum pengurutan : \n");
    for (i = 0; i < MAX; i++) {
        srand(time(NULL) * (i + 1));
        data_awal[i] = rand() % 100 + 1;
        printf("%d ", data_awal[i]);
    }
    printf("\nSetelah pengurutan : \n");
    
    for (i = 0; i < MAX; i++)
        data_urut[i] = data_awal[i];
    
    time(&k1);
    InsertionSort(data_urut);
    time(&k2);
    
    for (i = 0; i < MAX; i++)
        printf("%d ", data_urut[i]);
    
    printf("\nWaktu = %lld\n", (long long)(k2 - k1)); 
    
    return 0;
}


