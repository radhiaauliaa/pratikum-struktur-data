//created by Radhia Aulia Nisa 23343049
#include<stdio.h> 
#include<stdlib.h> 
 
struct Node 
{ 
    int data; 
    struct Node *next; 
}*atas = NULL; 
 
void push(int); 
void pop(); 
void tampilkan(); 
 
int main() 
{ 
    int pilihan, value; 
    printf("\n== Stack Menggunakan Linked List ==\n"); 
    while(1){ 
        printf("\n****** MENU ******\n"); 
        printf("1. Push\n2. Pop\n3. Tampilkan\n4. Keluar\n"); 
        printf("Masukkan pilihan: "); 
        scanf("%d",&pilihan); 
        switch(pilihan){ 
            case 1: 
                printf("Masukkan nilai yang ingin ditambahkan ke stack: "); 
                scanf("%d", &value); 
                push(value); 
                break; 
            case 2:
                pop(); 
                break; 
            case 3: 
                tampilkan(); 
                break; 
            case 4: 
                exit(0); 
            default: 
                printf("\nPilihan tidak valid, silakan coba lagi!\n"); 
        } 
    } 
} 

void push(int value) 
{ 
    struct Node *newNode; 
    newNode = (struct Node*)malloc(sizeof(struct Node)); 
    if(newNode == NULL) { 
        printf("Error: Memory allocation failed.\n"); 
        exit(EXIT_FAILURE); 
    }
    newNode->data = value; 
    if(atas == NULL) 
        newNode->next = NULL; 
    else 
        newNode->next = atas; 
    atas = newNode; 
    printf("\n%d ditambahkan ke dalam stack.\n", value); 
} 

void pop() 
{ 
    if(atas == NULL) 
        printf("\nStack kosong!!!\n"); 
    else{ 
        struct Node *temp = atas; 
        printf("\n%d dihapus dari stack.\n", temp->data); 
        atas = temp->next; 
        free(temp); 
    } 
} 

void tampilkan() 
{ 
    if(atas == NULL) 
        printf("\nStack kosong!!!\n"); 
    else{ 
        struct Node *temp = atas; 
        printf("\nIsi stack: "); 
        while(temp != NULL){ 
            printf("%d ",temp->data); 
            temp = temp -> next; 
        } 
        printf("\n"); 
    } 
} 

