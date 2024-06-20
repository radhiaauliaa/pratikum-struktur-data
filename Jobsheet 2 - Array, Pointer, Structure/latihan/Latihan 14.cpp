//created by Radhia Aulia Nisa 23343049

#include <stdio.h>

int main() {
    int usia1 = 50;
    int usia2 = 18;

    // Membuat sebuah pointer
    int *ptr;

    // Menugaskan pointer tersebut kepada usia1
    ptr = &usia1;

    printf("\nUsia saya (usia1) : %d", usia1); // Menampilkan 50
    printf("\nUsia saya (*ptr) : %d", *ptr);    // Menampilkan 50

    // *ptr adalah nilai yang disimpan ptr, yaitu 50
    printf("\n(&usia1) %p (ptr) %p", (void*)&usia1, (void*)ptr);
    // ptr adalah alamat dari usia1 sehingga juga adalah &usia1. Keduanya sama.

    // Sekarang Anda akan menugaskan pointer tersebut kepada usia2
    ptr = &usia2;

    printf("\nUsia Anda (*ptr) : %d", *ptr); // Menampilkan 18
    // *ptr adalah nilai yang disimpan ptr, yaitu 18

    printf("\n(&usia2) %p (ptr) %p", (void*)&usia2, (void*)ptr);
    // ptr adalah alamat dari usia2 sehingga juga adalah &usia2. Keduanya sama.

    // Menampilkan alamat dari variabel ptr. Anda tidak perlu alamat ini.
    printf("\n(&ptr) %p", (void*)&ptr);

    return 0;
}

