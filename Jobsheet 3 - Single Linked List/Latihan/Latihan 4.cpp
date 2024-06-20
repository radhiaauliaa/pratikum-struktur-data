//created by Radhia Aulia Nisa 23343049
#include <stdio.h>
#include <stdlib.h>

// Definisikan struktur LinkedList
typedef struct LinkedList {
    int data;
    struct LinkedList* next;
} node;

// Deklarasikan variabel head, second, dan third di luar fungsi main
node* head = NULL;
node* second = NULL;
node* third = NULL;

int main() {
    // Alokasikan memori untuk tiga node
    head = (node*)malloc(sizeof(node));
    second = (node*)malloc(sizeof(node));
    third = (node*)malloc(sizeof(node));

    // Masukkan data ke dalam masing-masing node
    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL; // Menandakan akhir dari linked list

    // Mencetak isi linked list
    printf("Isi linked list:\n");
    node* current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");

    // Dealokasi memori setelah selesai digunakan
    free(head);
    free(second);
    free(third);

    return 0;
}

 

