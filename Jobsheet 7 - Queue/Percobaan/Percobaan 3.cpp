//created by Radhia Aulia Nisa 23343049

#include <stdio.h>
#define ukuran 6

int queue[ukuran]; // deklarasi array
int front = -1;
int rear = -1;

// fungsi untuk menambahkan elemen pada circular queue
void enqueue(int element) {
    if (front == -1 && rear == -1) // kondisi untuk mengecek apakah queue kosong
    {
        front = 0;
        rear = 0;
        queue[rear] = element;
    } else if ((rear + 1) % ukuran == front) // kondisi untuk mengecek apakah queue penuh
    {
        printf("Antrian telah penuh..");
    } else {
        rear = (rear + 1) % ukuran; // nilai pada rear bertambah
        queue[rear] = element; // memberikan nilai pada queue posisi rear
    }
}

// fungsi untuk menghapus elemen dari queue
void dequeue() {
    if ((front == -1) && (rear == -1)) // kondisi untuk mengecek apakah queue kosong
    {
        printf("\nQueue belum penuh..");
    } else if (front == rear) {
        printf("\nElemen yang di-dequeue adalah %d ", queue[front]);
        front = -1;
        rear = -1;
    } else {
        printf("\nElemen yang di-dequeue adalah %d ", queue[front]);
        front = (front + 1) % ukuran;
    }
}

// fungsi untuk menampilkan elemen queue
void display(){
	int i=front;
	if(front==-1 && rear==-1){
		printf("\nQueue kosong!!...");
	}else{
		printf("\nElemen pada queue adalah : ");
		while(i<=rear){
			printf("%d", queue[i]);
			i=(i+1)%ukuran;
		}
	}
}

int main() {
	int menu=1,x; // deklarasi variabel
	
	while(menu<4 && menu!=0){ // looping menggunakan while
		printf("\n****************Circular Queue********************\n");
		printf("\n==================================================\n");
		printf("\n1: Tambah sebuah elemen");
		printf("\n2: Hapus sebuah elemen");
		printf("\n3: Tampilkan sebuah elemen");
		printf("\nMasukan pilihanmu! ");
		scanf("%d", &menu);
	
		switch(menu){
			case 1:
				printf("Silakan masukan elemen yang ingin kamu tambah ");
				scanf("%d", &x);
				enqueue(x);
				break;
			case 2:
				dequeue();
				break;
			case 3:
				display();
		}
	}
	return 0; 
}
