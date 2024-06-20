//created by Radhia Aulia Nisa 23343049

#include <stdio.h>

struct level5 {
    int value5;
};

struct level4 {
    struct level5 nested5;
};

struct level3 {
    struct level4 nested4;
};

struct level2 {
    struct level3 nested3;
};

struct level1 {
    struct level2 nested2;
};

int main() {
    struct level1 nested1;

    
    nested1.nested2.nested3.nested4.nested5.value5 = 10;

    
    printf("Nilai: %d\n", nested1.nested2.nested3.nested4.nested5.value5);

    return 0;
}

