//created by Radhia Aulia Nisa 23343049

#include <stdio.h>

int main(){
    int a[100], n, i, j, position, swap;
    printf("Masukan jumlah elemen: ");
    scanf("%d", &n);
    printf("Masukan %d buah bilangan\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for(i=0; i<n-1; i++){
        position=i;
        for(j=i+1; j<n; j++){
            if(a[position]>a[j])
            position=j;
        }
        if(position != i){
            swap=a[i];
            a[i]=a[position];
            a[position]=swap;
        }
    }
    printf("Array yang telah diurutkan:\n");
    for(i = 0; i < n; i++)
    printf("%d\n", a[i]);
    return 0;
}
