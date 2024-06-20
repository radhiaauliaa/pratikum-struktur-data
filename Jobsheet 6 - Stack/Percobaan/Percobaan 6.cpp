//created by Radhia Aulia Nisa 23343049
#include <stdio.h>
#include <stdlib.h>
#define bool int

// Struktur node dari Stack
struct sNode {
    int data;
    struct sNode* next;
};

// Fungsi Prototype
void push(struct sNode** top_ref, int new_data);
int pop(struct sNode** top_ref);
bool isEmpty(struct sNode* top);
void print(struct sNode* top);
void insertAtBottom(struct sNode** top_ref, int item);
void reverse(struct sNode** top_ref);

// Fungsi untuk mengecek apakah Stack kosong
bool isEmpty(struct sNode* top) {
    return (top == NULL) ? 1 : 0;
}

// Fungsi untuk menambahkan item ke stack
void push(struct sNode** top_ref, int new_data) {
    // mengalokasikan node
    struct sNode* new_node = (struct sNode*)malloc(sizeof(struct sNode));
    if (new_node == NULL) {
        printf("Stack overflow \n");
        exit(0);
    }

    // Memasukan kedalam data
    new_node->data = new_data;

    // Menautkan list lama dari node baru
    new_node->next = (*top_ref);

    // Menggerakan head  untuk menunjuk (point) ke node baru
    (*top_ref) = new_node;
}

// Fungsi untuk mengeluarkan item dari stack
int pop(struct sNode** top_ref) {
    int res;
    struct sNode* top;

    // jika Stack kosong, maka error
    if (*top_ref == NULL) {
        printf("Stack underflow \n");
        exit(0);
    }
    else {
        top = *top_ref;
        res = top->data;
        *top_ref = top->next;
        free(top);
        return res;
    }
}

// Fungsi untuk menyisipkan elemen di bagian bawah stack
void insertAtBottom(struct sNode** top_ref, int item) {
    if (isEmpty(*top_ref))
        push(top_ref, item);
    else {
        int temp = pop(top_ref);
        insertAtBottom(top_ref, item);
        push(top_ref, temp);
    }
}

// Fungsi untuk membalikkan stack menggunakan rekursi
void reverse(struct sNode** top_ref) {
    if (!isEmpty(*top_ref)) {
        int temp = pop(top_ref);
        reverse(top_ref);
        insertAtBottom(top_ref, temp);
    }
}

// Fungsi untuk menampilkan linked list
void print(struct sNode* top) {
    printf("\n");
    while (top != NULL) {
        printf(" %d ", top->data);
        top = top->next;
    }
}

int main() {
    struct sNode* s = NULL;
    push(&s, 4);
    push(&s, 3);
    push(&s, 2);
    push(&s, 1);

    printf("\n Stack Awal ");
    print(s);
    reverse(&s);
    printf("\n Stack yang dibalikkan ");
    print(s);
    return 0;
}

