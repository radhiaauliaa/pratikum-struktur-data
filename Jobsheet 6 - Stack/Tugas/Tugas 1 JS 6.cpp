//created by Radhia Aulia Nisa 23343049

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 100

// Struktur untuk data mahasiswa
typedef struct {
    char nim[20];
    char nama[50];
    float nilai;
} Mahasiswa;

// Struktur untuk stack
typedef struct {
    Mahasiswa data[MAX_SIZE];
    int top;
} Stack;

// Inisialisasi stack
void initStack(Stack *stack) {
    stack->top = -1;
}

// Fungsi untuk mengecek apakah stack kosong
int isEmpty(Stack *stack) {
    return (stack->top == -1);
}

// Fungsi untuk mengecek apakah stack penuh
int isFull(Stack *stack) {
    return (stack->top == MAX_SIZE - 1);
}

// Fungsi untuk menambahkan data ke dalam stack (push)
void push(Stack *stack, Mahasiswa mhs) {
    if (isFull(stack)) {
        printf("Stack penuh, tidak dapat menambahkan data.\n");
        return;
    }
    stack->data[++(stack->top)] = mhs;
}

// Fungsi untuk menghapus data dari stack (pop)
Mahasiswa pop(Stack *stack) {
    Mahasiswa temp;
    if (isEmpty(stack)) {
        printf("Stack kosong, tidak dapat mengambil data.\n");
        strcpy(temp.nim, "");
        strcpy(temp.nama, "");
        temp.nilai = 0;
        return temp;
    }
    temp = stack->data[(stack->top)--];
    return temp;
}

// Fungsi untuk menukar dua data Mahasiswa
void swap(Mahasiswa *a, Mahasiswa *b) {
    Mahasiswa temp = *a;
    *a = *b;
    *b = temp;
}

// Fungsi untuk sorting (pengurutan) data mahasiswa berdasarkan nilai (bubble sort)
void sort(Stack *stack) {
    for (int i = 0; i <= stack->top; i++) {
        for (int j = 0; j < stack->top - i; j++) {
            if (stack->data[j].nilai > stack->data[j + 1].nilai) {
                swap(&(stack->data[j]), &(stack->data[j + 1]));
            }
        }
    }
}

// Fungsi untuk menampilkan data mahasiswa
void display(Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack kosong, tidak ada data untuk ditampilkan.\n");
        return;
    }
    printf("Data mahasiswa:\n");
    for (int i = stack->top; i >= 0; i--) {
        printf("NIM: %s, Nama: %s, Nilai: %.2f\n", stack->data[i].nim, stack->data[i].nama, stack->data[i].nilai);
    }
}

int main() {
    Stack stack;
    initStack(&stack);

    int choice;
    do {
        printf("\nMenu:\n");
        printf("1. Tambah Data Mahasiswa\n");
        printf("2. Hapus Data Mahasiswa Teratas\n");
        printf("3. Tampilkan Data Mahasiswa\n");
        printf("4. Urutkan Data Mahasiswa Berdasarkan Nilai\n");
        printf("5. Keluar\n");
        printf("Pilih: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (!isFull(&stack)) {
                    Mahasiswa mhs;
                    printf("Masukkan NIM: ");
                    scanf("%s", mhs.nim);
                    printf("Masukkan Nama: ");
                    scanf(" %[^\n]s", mhs.nama); // Menerima input string dengan spasi
                    printf("Masukkan Nilai: ");
                    scanf("%f", &mhs.nilai);
                    push(&stack, mhs);
                    printf("Data mahasiswa berhasil ditambahkan.\n");
                } else {
                    printf("Stack penuh, tidak dapat menambahkan data.\n");
                }
                break;
            case 2:
                if (!isEmpty(&stack)) {
                    Mahasiswa removedMhs = pop(&stack);
                    printf("Data mahasiswa teratas berhasil dihapus:\n");
                    printf("NIM: %s, Nama: %s, Nilai: %.2f\n", removedMhs.nim, removedMhs.nama, removedMhs.nilai);
                } else {
                    printf("Stack kosong, tidak ada data untuk dihapus.\n");
                }
                break;
            case 3:
                display(&stack);
                break;
            case 4:
                sort(&stack);
                printf("Data mahasiswa berhasil diurutkan berdasarkan nilai.\n");
                break;
            case 5:
                printf("Program selesai.\n");
                break;
            default:
                printf("Pilihan tidak valid.\n");
        }
    } while (choice != 5);

    return 0;
}

