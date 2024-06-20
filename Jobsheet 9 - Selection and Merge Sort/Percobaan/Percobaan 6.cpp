//created by Radhia Aulia Nisa 23343049

#include <stdio.h>

void selsort(int array[],int n);

int main(){
    int array[100], n,i;
    
    printf("Masukan jumlah elemen: ");
    scanf("%d", &n);
    
    printf("Masukan %d buah bilangan\n", n);
    for(i = 0; i < n; i++)
    scanf("%d", &array[i]);
    selsort(array,n);
    return 0;
}

void selsort(int array[], int n){
    int i, j, position, swap;
    for(i=0; i<(n-1); i++){
        position= i;
        for(j=i+1; j<n; j++){
            if(array[position]>array[j])
            position=j;
        }
        if(position != 1){
            swap=array[i];
            array[i]=array[position];
            array[position]=swap;
        }   
    }
    printf("Array yang telah diurutkan:\n");
    for(i = 0; i < n; i++)
    printf("%d\n", array[i]);
}

