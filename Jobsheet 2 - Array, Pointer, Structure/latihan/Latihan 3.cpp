//created by Radhia Aulia Nisa 23343049
#include <stdio.h>

int main() {
    int n, i;
    int angka[100]; 
    
    printf("Masukkan banyaknya bilangan : ");
    scanf("%d", &n);
    
    for (i = 0; i < n; i++) {
        printf("Masukkan angka ke-%d : ", i + 1);
        scanf("%d", &angka[i]);
    }
    
    for (i = 0; i < n; i++) {
        printf("Angka ke-%d : %d\n", i + 1, angka[i]);
    }
    
    return 0;
}

