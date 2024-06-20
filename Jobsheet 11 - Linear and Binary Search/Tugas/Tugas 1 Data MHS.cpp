//created by Radhia Aulia Nisa 23343049

#include <stdio.h>
#include <string.h>

typedef struct {
    int NIM;
    char Nama[50];
    char TTL[50];
    float IPK;
} Mahasiswa;

void printMahasiswa(Mahasiswa m) {
    printf("NIM: %d\n", m.NIM);
    printf("Nama: %s\n", m.Nama);
    printf("TTL: %s\n", m.TTL);
    printf("IPK: %.2f\n\n", m.IPK);
}

void sequentialSearch(Mahasiswa mhs[], int n, int nim) {
    int found = 0;
    for (int i = 0; i < n; i++) {
        if (mhs[i].NIM == nim) {
            printf("Data ditemukan dengan Sequential Search:\n");
            printMahasiswa(mhs[i]);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Data dengan NIM %d tidak ditemukan dengan Sequential Search.\n", nim);
    }
}

void binarySearch(Mahasiswa mhs[], int n, int nim) {
    int left = 0, right = n - 1, found = 0;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (mhs[mid].NIM == nim) {
            printf("Data ditemukan dengan Binary Search:\n");
            printMahasiswa(mhs[mid]);
            found = 1;
            break;
        } else if (mhs[mid].NIM < nim) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    if (!found) {
        printf("Data dengan NIM %d tidak ditemukan dengan Binary Search.\n", nim);
    }
}

void sortMahasiswa(Mahasiswa mhs[], int n) {
    Mahasiswa temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (mhs[i].NIM > mhs[j].NIM) {
                temp = mhs[i];
                mhs[i] = mhs[j];
                mhs[j] = temp;
            }
        }
    }
}

int main() {
    int n, searchNIM;

    printf("Masukkan jumlah mahasiswa: ");
    scanf("%d", &n);
    getchar(); // to consume newline character after number input

    Mahasiswa mhs[n];
    
    for (int i = 0; i < n; i++) {
        printf("Masukkan data mahasiswa ke-%d:\n", i + 1);
        printf("NIM: ");
        scanf("%d", &mhs[i].NIM);
        getchar(); // to consume newline character after number input
        printf("Nama: ");
        fgets(mhs[i].Nama, sizeof(mhs[i].Nama), stdin);
        mhs[i].Nama[strcspn(mhs[i].Nama, "\n")] = 0; // remove newline character
        printf("TTL: ");
        fgets(mhs[i].TTL, sizeof(mhs[i].TTL), stdin);
        mhs[i].TTL[strcspn(mhs[i].TTL, "\n")] = 0; // remove newline character
        printf("IPK: ");
        scanf("%f", &mhs[i].IPK);
        getchar(); // to consume newline character after float input
    }

    printf("Masukkan NIM yang ingin dicari: ");
    scanf("%d", &searchNIM);

    // Sequential Search
    sequentialSearch(mhs, n, searchNIM);

    // Sort the array before Binary Search
    sortMahasiswa(mhs, n);

    // Binary Search
    binarySearch(mhs, n, searchNIM);

    return 0;
}

