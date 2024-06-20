//created by Radhia Aulia Nisa 23343049

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH 100

// Definisi struktur stack
typedef struct {
    char data[MAX_LENGTH];
    int top;
} Stack;

// Fungsi untuk membuat stack baru
Stack* createStack() {
    Stack* stack = (Stack*)malloc(sizeof(Stack));
    stack->top = -1;
    return stack;
}

// Fungsi untuk menambahkan elemen ke dalam stack
void push(Stack* stack, char item) {
    if (stack->top == MAX_LENGTH - 1) {
        printf("Stack penuh, tidak dapat menambahkan elemen.\n");
        return;
    }
    stack->data[++stack->top] = item;
}

// Fungsi untuk menghapus elemen dari stack dan mengembalikan nilai yang dihapus
char pop(Stack* stack) {
    if (stack->top == -1) {
        printf("Stack kosong.\n");
        return '\0';
    }
    return stack->data[stack->top--];
}

// Fungsi untuk membalikkan kata menggunakan stack
void reverseString(char* string) {
    Stack* stack = createStack();
    int length = strlen(string);

    // Push setiap karakter dari string ke dalam stack
    for (int i = 0; i < length; i++) {
        push(stack, string[i]);
    }

    // Pop karakter dari stack dan simpan kembali ke dalam string
    for (int i = 0; i < length; i++) {
        string[i] = pop(stack);
    }

    free(stack);
}

int main() {
    char kata[MAX_LENGTH];
    int choice;

    do {
        printf("\nMenu:\n");
        printf("1) Input Kata\n");
        printf("2) Balik Kata\n");
        printf("3) Exit\n");
        printf("Pilihan Anda: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Masukkan kata: ");
                scanf("%s", kata);
                break;
            case 2:
                reverseString(kata);
                printf("Kata setelah dibalik: %s\n", kata);
                break;
            case 3:
                printf("Terima kasih telah menggunakan program ini.\n");
                break;
            default:
                printf("Pilihan tidak valid.\n");
        }
    } while (choice != 3);

    return 0;
}

