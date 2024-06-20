//created by Radhia Aulia Nisa 23343049

#include <stdio.h>
#include <stdlib.h>
#define MAX 10
#define MaxStack 10

int Data[MAX]; // = {12,35,9,11,3,17,23,15,31,20};

// Prosedur menukar data
void Tukar (int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
// Prosedur pengurutan metode Quick Sort
void QuickSortNonRekursif(){
    struct tump{
        int Kiri;
        int Kanan;
    }Tumpukan[MaxStack];
    int i, j, L, R, x, ujung = 1;
    Tumpukan[1].Kiri = 0;
    Tumpukan[1].Kanan = MAX-1;
    while (ujung!=0){
        L = Tumpukan[ujung].Kiri;
        R = Tumpukan[ujung].Kanan;
        ujung--;
        while(R > L){
            i = L;
            j = R;
            x = Data[(L+R)/2];
            while(i <= j){
                while(Data[i] < x)
                    i++;
                while(x < Data[j])
                    j--;
                if(i <= j){
                    Tukar(&Data[i], &Data[j]);
                    i++;
                    j--;
                }
            }
            if(L<i){
                ujung++;
                Tumpukan[ujung].Kiri=i;
                Tumpukan[ujung].Kanan=R;
            }
           R=j;
        }
    }
}
int main(){
    int i;
    srand(0);
    // Membangkitkan bilangan acak
    printf("DATA SEBELUM TERURUT");
    for(i=0; i<MAX; i++) {
        Data[i] = (int) rand()/1000+1;
        printf("\nData ke %d : %d ", i, Data[i]);
    }
    QuickSortNonRekursif();
    // Data setelah terurut
    printf("\nDATA SETELAH TERURUT");
    for(i=0; i<MAX; i++){
        printf("\nData ke %d : %d ", i, Data[i]);
    }
}
