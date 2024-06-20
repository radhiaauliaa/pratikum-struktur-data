//created by Radhia Aulia Nisa 23343049
#include<stdio.h> 
#include<stdlib.h> 
 
#define UKURAN 5 
 
void push(int); 
void pop(); 
void display(); 
 
int stack[UKURAN], atas = -1; 
 
int main() { 
    int value, pilihan; 
    while(1){ 
        printf("\n\n***** MENU *****\n"); 
        printf("1. Push\n2. Pop\n3. Tampilkan\n4. Keluar\n"); // Menambahkan \n diakhir pilihan
        printf("Masukan pilihanmu: "); 
        scanf("%d",&pilihan); 
        switch(pilihan){ 
            case 1: 
                printf("Masukan value yang ingin dimasukan: "); 
                scanf("%d",&value); 
                push(value); 
                break; 
            case 2: 
                pop(); 
                break; 
            case 3: 
                display(); 
                break; 
            case 4: 
                exit(0); 
            default: 
                printf("\nPilihan tidak valid! silakan coba lagi!"); 
        } 
    } 
} 
void push(int value){ 
    if(atas == UKURAN-1) 
        printf("\nStack telah penuh, tidak memungkinkan menambah item\n"); // Menambahkan pesan error
    else{ 
        atas++; 
        stack[atas] = value; 
        printf("\nItem berhasil ditambahkan\n"); 
    } 
}
void pop(){ 
    if(atas == -1) 
        printf("\nStack kosong, tidak memungkinkan untuk menghapus item\n"); // Menambahkan pesan error
    else{ 
        printf("\nItem berhasil dihapus: %d\n", stack[atas]); // Menambahkan \n dan mencetak item yang dihapus
        atas--; 
    } 
} 
void display(){ 
    if(atas == -1) 
        printf("\nStack kosong. Tidak ada item yang bisa ditampilkan\n"); // Menambahkan pesan error
    else{ 
        int i; 
        printf("\nItem yang ada pada stack adalah:\n"); 
        for(i=atas; i>=0; i--) 
            printf("%d\n",stack[i]); 
    } 
} 

