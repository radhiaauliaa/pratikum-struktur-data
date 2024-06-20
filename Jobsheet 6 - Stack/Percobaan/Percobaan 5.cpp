//created by Radhia Aulia Nisa 23343049
#include<stdio.h> 
#define MAX 5 

// Deklarasi Double Stack 
typedef struct { 
    int atas1; 
    int atas2;
    int ele[MAX]; 
} DoubleStack;  

// Menginisialisasi Double Stack 
void init(DoubleStack *s) { 
    s->atas1 = -1; 
    s->atas2 = MAX; 
} 

// Fungsi Push pada Stack1 
void pushA(DoubleStack *s, int item) { 
    if (s->atas2 == s->atas1 + 1) { 
        printf("\nStack Overflow pada Stack1"); 
        return; 
    } 

    s->atas1++; 
    s->ele[s->atas1] = item; 

    printf("\n%d ditambahkan pada Stack1", item);   
} 

// Fungsi Push pada Stack2 
void pushB(DoubleStack *s, int item) { 
    if (s->atas2 == s->atas1 + 1) { 
        printf("\nStack Overflow pada Stack2"); 
        return; 
    } 

    s->atas2--; 
    s->ele[s->atas2] = item; 

    printf("\n%d ditambahkan pada Stack2", item);   
} 

// Fungsi Pop pada Stack1 
int popA(DoubleStack *s, int *item) { 
    if (s->atas1 == -1) { 
        printf("\nStack Underflow pada Stack1"); 
        return -1; 
    } 

    *item = s->ele[s->atas1--]; 
    return 0; 
} 

// Fungsi Pop pada Stack2 
int popB(DoubleStack *s, int *item) { 
    if (s->atas2 == MAX) { 
        printf("\nStack Underflow pada Stack2"); 
        return -1; 
    } 

    *item = s->ele[s->atas2++]; 
    return 0; 
} 

int main() {  
    int item = 0; 
    DoubleStack s; 
    init(&s); 

    pushB(&s, 10); 
    pushA(&s, 20); 
    pushA(&s, 30); 
    pushB(&s, 40); 
    pushB(&s, 50); 
    pushB(&s, 60); 

    if (popA(&s, &item) == 0) 
        printf("\n%d dihapus dari Stack1", item); 
    if (popA(&s, &item) == 0) 
        printf("\n%d dihapus dari Stack1", item); 
    if (popA(&s, &item) == 0) 
        printf("\n%d dihapus dari Stack1", item); 
    if (popB(&s, &item) == 0) 
        printf("\n%d dihapus dari Stack2", item); 
    if (popB(&s, &item) == 0) 
        printf("\n%d dihapus dari Stack2", item); 
    if (popB(&s, &item) == 0) 
        printf("\n%d dihapus dari Stack2", item); 

    printf("\n"); 
    return 0; 
}

