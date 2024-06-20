//created by Radhia Aulia Nisa 23343049
#include <limits.h> 
#include <stdio.h> 
#include <stdlib.h> 

// Struktur untuk merepresentasikan stack 
struct Stack { 
    int atas; 
    unsigned kapasitas; 
    int* array; 
};

// Fungsi untuk membuat stack berdasarkan kapasitas yang diberikan.
// Menginisialisasi ukuran stack sebagai 0 
struct Stack* buatStack(unsigned kapasitas) 
{ 
    struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack)); 
    stack->kapasitas = kapasitas; 
    stack->atas = -1; 
    stack->array = (int*)malloc(stack->kapasitas * sizeof(int)); 
    return stack; 
} 

// Fungsi untuk memeriksa apakah stack penuh 
int isFull(struct Stack* stack) 
{ 
    return stack->atas == stack->kapasitas - 1; 
} 

// Fungsi untuk memeriksa apakah stack kosong 
int isEmpty(struct Stack* stack) 
{ 
    return stack->atas == -1; 
} 

// Fungsi push untuk menambahkan item ke stack. 
void push(struct Stack* stack, int item) 
{ 
    if (isFull(stack)) {
        printf("Error: Stack penuh, push gagal.\n");
        return;
    }
    stack->array[++stack->atas] = item; 
    printf("%d ditambahkan ke stack\n", item); 
} 

// Fungsi pop untuk menghapus sebuah item dari stack. 
int pop(struct Stack* stack) 
{ 
    if (isEmpty(stack)) {
        printf("Error: Stack kosong, pop gagal.\n");
        return INT_MIN; 
    }
    return stack->array[stack->atas--]; 
} 

// Fungsi untuk mengembalikan bagian atas (top) dari stack tanpa melepasnya 
int peek(struct Stack* stack) 
{ 
    if (isEmpty(stack)) {
        printf("Error: Stack kosong, peek gagal.\n");
        return INT_MIN; 
    }
    return stack->array[stack->atas]; 
} 

// Program utama untuk mengetes fungsi-fungsi di atas 
int main() 
{ 
    struct Stack* stack = buatStack(100); 

    push(stack, 10); 
    push(stack, 20); 
    push(stack, 30); 

    printf("%d dihapus dari stack\n", pop(stack)); 

    return 0; 
}

