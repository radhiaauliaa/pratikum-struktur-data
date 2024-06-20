//created by Radhia Aulia Nisa 23343049

#include <stdio.h>
#define ukuran 5
int deque[ukuran];
int f = -1, r = -1;

// Fungsi untuk menambahkan nilai pada bagian depan
void insert_front(int x) {
    if ((f == 0 && r == ukuran - 1) || (f == r + 1)) {
        printf("Overflow");
    } else if ((f == -1) && (r == -1)) {
        f = r = 0;
        deque[f] = x;
    } else if (f == 0) {
        f = ukuran - 1;
        deque[f] = x;
    } else {
        f = f - 1;
        deque[f] = x;
    }
}

// Fungsi untuk menambahkan nilai pada bagian belakang
void insert_rear(int x) {
    if ((f == 0 && r == ukuran - 1) || (f == r + 1)) {
        printf("Overflow");
    } else if ((f == -1) && (r == -1)) {
        r = 0;
        deque[r] = x;
    } else if (r == ukuran - 1) {
        r = 0;
        deque[r] = x;
    } else {
        r++;
        deque[r] = x;
    }
}

// Menampilkan semua nilai yang di deque
void display() {
    int i = f;
    printf("\nElemen pada deque adalah: ");
    while (i != r) {
        printf("%d ", deque[i]);
        i = (i + 1) % ukuran;
    }
    printf("%d", deque[r]);
}

// Fungsi untuk mendapatkan nilai paling depan pada deque
void getfront() {
    if ((f == -1) && (r == -1)) {
        printf("Deque kosong");
    } else {
        printf("\nNilai dari elemen pada bagian depan adalah: %d ", deque[f]);
    }
}

// Fungsi untuk mendapatkan nilai paling belakang pada deque
void getrear() {
    if ((f == -1) && (r == -1)) {
        printf("Deque kosong");
    } else {
        printf("\nNilai pada elemen belakang adalah %d ", deque[r]);
    }
}

// Fungsi untuk menghapus elemen dari depan deque
void delete_front() {
    if ((f == -1) && (r == -1)) {
        printf("Deque kosong");
    } else if (f == r) {
        printf("\nElemen yang dihapus adalah %d ", deque[f]);
        f = -1;
        r = -1;
    } else if (f == (ukuran - 1)) {
        printf("\nElemen yang dihapus adalah %d ", deque[f]);
        f = 0;
    } else {
        printf("\nElemen yang dihapus adalah %d ", deque[f]);
        f = f + 1;
    }
}

// Fungsi untuk menghapus elemen dari belakang deque
void delete_rear() {
    if ((f == -1) && (r == -1)) {
        printf("Deque kosong");
    } else if (f == r) {
        printf("\nElemen yang dihapus adalah %d ", deque[r]);
        f = -1;
        r = -1;
    } else if (r == 0) {
        printf("\nElemen yang dihapus adalah %d ", deque[r]);
        r = ukuran - 1;
    } else {
        printf("\nElemen yang dihapus adalah %d ", deque[r]);
        r = r - 1;
    }
}

int main() {
    insert_front(20);
    insert_front(10);
    insert_rear(30);
    insert_rear(50);
    insert_rear(80);
    display(); // Memanggil fungsi display untuk mendapatkan nilai yang di deque
    getfront(); // Mendapatkan nilai pada bagian front-end
    getrear(); // Mendapatkan nilai pada bagian rear-end
    delete_front();
    delete_rear();
    display(); // Memanggil fungsi display untuk mendapatkan nilai setelah proses penghapusan
    return 0;
}


