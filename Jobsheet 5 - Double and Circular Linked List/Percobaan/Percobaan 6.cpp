//created by Radhia Aulia Nisa 23343049
#include <stdio.h>
#include <stdlib.h>

struct node {
    struct node *prev;
    struct node *next;
    int data;
};

struct node *head = NULL; // Inisialisasi head dengan NULL

// Deklarasi fungsi-fungsi
void tambahAwal();
void tambahAkhir();
void hapusAwal();
void hapusAkhir();
void tampilkan();
void cari();

int main() {
    int choice = 0;
    while (choice != 7) { // Diganti 7, sesuai dengan jumlah opsi menu
        printf("\n*********Main Menu*********\n");
        printf("\nSilakan pilih salah satu dari menu berikut...\n");
        printf("\n===============================================\n");
        printf("\n1. Masukkan data di awal\n2. Masukkan data di akhir\n3. Hapus dari awal\n4. Hapus dari akhir\n5. Cari sebuah elemen\n6. Tampilkan\n7. Exit\n");
        printf("\nMasukkan pilihanmu? \n");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                tambahAwal();
                break;
            case 2:
                tambahAkhir();
                break;
            case 3:
                hapusAwal();
                break;
            case 4:
                hapusAkhir();
                break;
            case 5:
                cari();
                break;
            case 6:
                tampilkan();
                break;
            case 7:
                exit(0);
                break;
            default:
                printf("Mohon masukkan pilihan yang sesuai dengan menu..\n");
        }
    }
    return 0;
}

void tambahAwal() {
    struct node *ptr, *temp;
    int item;
    ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL) {
        printf("\nOVERFLOW");
    } else {
        printf("\nMasukkan nilai item: ");
        scanf("%d", &item);
        ptr->data = item;
        if (head == NULL) {
            head = ptr;
            ptr->next = head;
            ptr->prev = head;
        } else {
            temp = head;
            while (temp->next != head) {
                temp = temp->next;
            }
            temp->next = ptr;
            ptr->prev = temp;
            head->prev = ptr;
            ptr->next = head;
            head = ptr;
        }
        printf("\nNode inserted\n");
    }
}

void tambahAkhir() {
    struct node *ptr, *temp;
    int item;
    ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL) {
        printf("\nOVERFLOW");
    } else {
        printf("\nMasukkan nilai: ");
        scanf("%d", &item);
        ptr->data = item;
        if (head == NULL) {
            head = ptr;
            ptr->next = head;
            ptr->prev = head;
        } else {
            temp = head;
            while (temp->next != head) {
                temp = temp->next;
            }
            temp->next = ptr;
            ptr->prev = temp;
            head->prev = ptr;
            ptr->next = head;
        }
        printf("\nNode ditambahkan\n");
    }
}

void hapusAwal() {
    struct node *temp;
    if (head == NULL) {
        printf("\nUNDERFLOW");
    } else if (head->next == head) {
        head = NULL;
        free(head);
        printf("\nNode dihapus\n");
    } else {
        temp = head;
        while (temp->next != head) {
            temp = temp->next;
        }
        temp->next = head->next;
        head->next->prev = temp;
        free(head);
        head = temp->next;
        printf("\nNode dihapus\n");
    }
}

void hapusAkhir() {
    struct node *ptr;
    if (head == NULL) {
        printf("\nUNDERFLOW");
    } else if (head->next == head) {
        head = NULL;
        free(head);
        printf("\nNode dihapus\n");
    } else {
        ptr = head;
        if (ptr->next != head) {
            ptr = ptr->next;
        }
        ptr->prev->next = head;
        head->prev = ptr->prev;
        free(ptr);
        printf("\nNode dihapus\n");
    }
}

void tampilkan() {
    struct node *ptr;
    ptr = head;
    if (head == NULL) {
        printf("\nTidak ada item yang bisa ditampilkan\n");
    } else {
        printf("\nMenampilkan nilai...\n");
        do {
            printf("%d\n", ptr->data);
            ptr = ptr->next;
        } while (ptr != head);
    }
}

void cari() {
    struct node *ptr;
    int item, i = 0, flag = 0;
    ptr = head;
    if (ptr == NULL) {
        printf("\nList kosong\n");
    } else {
        printf("\nMasukkan item yang ingin Anda cari: ");
        scanf("%d", &item);
        do {
            if (ptr->data == item) {
                printf("Item ditemukan pada lokasi %d\n", i + 1);
                flag = 1;
                break;
            }
            ptr = ptr->next;
            i++;
        } while (ptr != head);
        if (flag == 0) {
            printf("Item tidak ditemukan\n");
        }
    }
}

