#include <stdio.h>

int main() {
    // Deklarasi tipe union dengan nama random
    union random {
        int a;
        int b;
    };

    // Deklarasi union random dengan nama variabel bilangan dan menugaskannya nilai 10
    union random bilangan = {10};

    // Inisialisasi pointer *ptr dan menugaskannya dengan alamat bilangan
    union random *ptr = &bilangan;

    // Mencetak nilai a dengan pointer
    printf("a = %d\n", bilangan.a);

    // Mengubah nilai b dengan pointer
    ptr->b = 30;

    // Mencetak nilai a dengan pointer
    printf("a = %d\n", ptr->a);

    return 0;
}
