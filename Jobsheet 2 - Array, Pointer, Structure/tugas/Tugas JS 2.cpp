//created by Radhia Aulia Nisa 23343049
#include <stdio.h>

#define MAX_MHS 100

struct TanggalLahir {
    int hari;
    int bulan;
    int tahun;
};

struct Mahasiswa {
    char nim[9]; 
    char nama[51];
    struct TanggalLahir tgl_lahir;
    float ipk;
};

void inputDataMHS(struct Mahasiswa *mhs1, int jumlah) {
    for (int i = 0; i < jumlah; i++) {
        printf("\nMasukkan Data Mahasiswa ke-%d\n", i + 1);

        printf("Nama Mahasiswa: ");
        scanf(" %[^\n]s", mhs1[i].nama);
        
        printf("NIM: ");
        scanf("%8s", mhs1[i].nim); 
        
        printf("Tanggal lahir mahasiswa (hari bulan tahun): ");
        scanf("%d %d %d", &mhs1[i].tgl_lahir.hari, &mhs1[i].tgl_lahir.bulan, &mhs1[i].tgl_lahir.tahun);
        
        printf("IPK Mahasiswa: ");
        scanf("%f", &mhs1[i].ipk);

        // Membersihkan buffer input
        while (getchar() != '\n');
    }
}

void tampilkanDataMHS(struct Mahasiswa *mhs1, int jumlah) {
    printf("\n======= DATA MAHASISWA =======\n");
    for (int i = 0; i < jumlah; i++) {
        printf("\nNama Mahasiswa: %s", mhs1[i].nama);
        printf("\nNIM: %s", mhs1[i].nim);
        printf("\nTanggal Lahir: %d-%d-%d", mhs1[i].tgl_lahir.hari, mhs1[i].tgl_lahir.bulan, mhs1[i].tgl_lahir.tahun);
        printf("\nIPK Mahasiswa: %.2f\n", mhs1[i].ipk);
    }
}

int main() {
    struct Mahasiswa mhs[MAX_MHS];
    int jumlah;

    printf("Masukkan jumlah mahasiswa: ");
    scanf("%d", &jumlah);

    // Input data untuk setiap mahasiswa
    inputDataMHS(mhs, jumlah);

    // Menampilkan data yang dimasukkan
    tampilkanDataMHS(mhs, jumlah);

    return 0;
}

