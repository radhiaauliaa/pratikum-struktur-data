//created by Radhia Aulia Nisa 23343049
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

// Struktur untuk merepresentasikan node dalam stack
struct StackNode {
    int data;
    struct StackNode* next;
};

// Fungsi untuk membuat node baru dalam stack
struct StackNode* newNode(int data) {
    struct StackNode* stackNode = (struct StackNode*)malloc(sizeof(struct StackNode));
    if (stackNode == NULL) {
        printf("Error: Memory allocation failed.\n");
        exit(EXIT_FAILURE);
    }
    stackNode->data = data;
    stackNode->next = NULL;
    return stackNode;
}

// Fungsi untuk memeriksa apakah stack kosong
int isEmpty(struct StackNode* root) {
    return (root == NULL);
}

// Fungsi untuk menambahkan elemen baru ke dalam stack (push)
void push(struct StackNode** root, int data) {
    struct StackNode* stackNode = newNode(data);
    stackNode->next = *root;
    *root = stackNode;
    printf("%d ditambahkan ke dalam stack.\n", data);
}

// Fungsi untuk menghapus elemen teratas dari stack (pop)
int pop(struct StackNode** root) {
    if (isEmpty(*root)) {
        printf("Error: Stack kosong, tidak bisa menghapus item.\n");
        return INT_MIN;
    }
    struct StackNode* temp = *root;
    *root = (*root)->next;
    int popped = temp->data;
    free(temp);
    return popped;
}

// Fungsi untuk melihat elemen teratas dari stack (peek)
int peek(struct StackNode* root) {
    if (isEmpty(root)) {
        printf("Error: Stack kosong, tidak bisa melihat item.\n");
        return INT_MIN;
    }
    return root->data;
}

int main() {
    struct StackNode* root = NULL;

    push(&root, 10);
    push(&root, 20);
    push(&root, 30);

    printf("Elemen teratas (top) adalah %d\n", peek(root));
    printf("%d dihapus dari stack.\n", pop(&root));
    printf("Elemen teratas (top) adalah %d\n", peek(root));

    return 0;
}

