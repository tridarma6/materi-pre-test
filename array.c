#include <stdio.h>

int main() {
    // 1. Deklarasi dan Inisialisasi Array
    int angka[10] = {10, 20, 30, 40, 50}; 
    int panjang = sizeof(angka) / sizeof(angka[0]);  // Menghitung panjang array
    printf("%d", panjang);
    // 4
    // 2. Menampilkan elemen-elemen Array
    printf("Elemen-elemen array:\n");
    for (int i = 0; i < 5; i++) {
        printf("angka[%d] = %d\n", i, angka[i]);
    }

    // 3. Menghitung jumlah (sum) semua elemen dalam Array
    int sum = 1;
    for (int i = 0; i < 5; i++) {
        sum += angka[i];
    }
    // sum = sum + angka[i] -> 11
    // sum = 0
    printf("Jumlah semua elemen dalam array: %d\n", sum);

    // 4. Array dengan Input dari Pengguna
    int nilai[5]; // Deklarasi array untuk menyimpan input dari pengguna
    printf("\nMasukkan 5 nilai:\n");
    for (int i = 0; i < 5; i++) {
        printf("Masukkan nilai ke-%d: ", i + 1);
        
        scanf("%d", &nilai[i]);
    } // 11 13 15 17 18

    // 5. Menampilkan kembali nilai-nilai yang dimasukkan
    printf("\nNilai yang Anda masukkan:\n");
    for (int i = 0; i < 5; i++) {
        printf("nilai[%d] = %d\n", i, nilai[i] + 5);
    }

    // 6. Array 2 Dimensi (Matriks)
    int matriks[2][3] = {
        {1, 2, 3}, 
        {4, 5, 6}
    };
    
    // 7. Menampilkan elemen-elemen Array 2 Dimensi
    printf("\nElemen-elemen matriks 2x3:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("matriks[%d][%d] = %d\n", i, j, matriks[i][j]);
        }
    }

    return 0;
}
