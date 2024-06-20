//created by Radhia Aulia Nisa 23343049

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Struktur untuk merepresentasikan buku
typedef struct buku_t {
    char judul[100];
    char pengarang[100];
    int tahun;
    struct buku_t *next;
    struct buku_t *prev;
} buku_t;

// Fungsi untuk menambahkan buku ke dalam perpustakaan
buku_t *tambah_buku(buku_t *head, const char *judul, const char *pengarang, int tahun)
{
    // Mengalokasikan memori untuk buku baru
    buku_t *buku_baru = (buku_t *)malloc(sizeof(buku_t));
    strcpy(buku_baru->judul, judul);
    strcpy(buku_baru->pengarang, pengarang);
    buku_baru->tahun = tahun;
    buku_baru->next = NULL;
    buku_baru->prev = NULL;

    // Jika perpustakaan masih kosong
    if (head == NULL) {
        return buku_baru;
    }

    // Jika perpustakaan sudah berisi buku, maka mencari posisi terakhir
    buku_t *current = head;
    while (current->next != NULL) {
        current = current->next;
    }
    current->next = buku_baru;
    buku_baru->prev = current;

    return head;
}

// Fungsi untuk menghapus buku dari perpustakaan
buku_t *hapus_buku(buku_t *head, const char *judul)
{
    // Jika perpustakaan kosong
    if (head == NULL) {
        return NULL;
    }

    // Mencari buku dengan judul yang sesuai
    buku_t *current = head;
    while (current != NULL) {
        if (strcmp(current->judul, judul) == 0) {
            // Menghubungkan buku sebelumnya dan setelahnya
            if (current->prev != NULL) {
                current->prev->next = current->next;
            } else {
                head = current->next;
            }

            if (current->next != NULL) {
                current->next->prev = current->prev;
            }

            free(current); // Melepaskan memori buku yang dihapus

            return head;
        }
        current = current->next;
    }

    return head;
}

// Fungsi untuk mencetak semua buku dalam perpustakaan
void cetak_buku(buku_t *head)
{
    // Jika perpustakaan kosong
    if (head == NULL) {
        printf("Tidak ada buku dalam perpustakaan.\n");
        return;
    }

    // Mencetak semua buku dalam perpustakaan
    buku_t *current = head;
    while (current != NULL) {
        printf("Judul: %s, Pengarang: %s, Tahun: %d\n", current->judul, current->pengarang, current->tahun);
        current = current->next;
    }
}

int main()
{
    buku_t *perpustakaan = NULL;

    // Menambahkan beberapa buku ke dalam perpustakaan
    perpustakaan = tambah_buku(perpustakaan, "Kita Pergi Hari Ini", "Ziggy Z", 2021);
    perpustakaan = tambah_buku(perpustakaan, "Di Tanah Lada", "Ziggy Z", 2015);
    perpustakaan = tambah_buku(perpustakaan, "Tanah Para Bandit", "Tere Liye", 2023);
    perpustakaan = tambah_buku(perpustakaan, "The Great Gatsby", "F. Scott Fitzgerald", 1925);

    printf("Buku-buku dalam perpustakaan:\n");
    cetak_buku(perpustakaan);

    // Menghapus buku "Pride and Prejudice" dari perpustakaan
    perpustakaan = hapus_buku(perpustakaan, "Di Tanah Lada");

    printf("\nBuku-buku dalam perpustakaan setelah menghapus 'Di Tanah Lada':\n");
    cetak_buku(perpustakaan);

    // Melepaskan memori yang dialokasikan untuk perpustakaan
    free(perpustakaan);

    return 0;
}

