//created by Radhia Aulia Nisa 23343049
#include <stdio.h>
#include <stdlib.h>

// Struktur untuk node dalam linked list
struct node {
    int data;
    struct node* next;
};

int main() {
    // Mendeklarasikan tiga pointer ke node untuk tiga node dalam linked list
    struct node* head = NULL;
    struct node* second = NULL;
    struct node* third = NULL;

    // Alokasi memori untuk tiga node
    head = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));

    // Memasukkan data dan mengatur pointer next
    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL; // Menandakan akhir dari linked list

    // Cetak isi linked list
    printf("Isi linked list:\n");
    printf("%d -> %d -> %d\n", head->data, second->data, third->data);

    // Dealokasi memori setelah selesai digunakan
    free(head);
    free(second);
    free(third);

    return 0;
}


