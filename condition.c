#include <stdio.h>

int main() {
    int number;

    // Input dari pengguna
    printf("Masukkan sebuah angka: ");
    scanf("%d", &number);

    // Perkondisian menggunakan if-else
    if (number > 0) {
        printf("Angka %d adalah bilangan positif.\n", number);
    } else if (number < 0) {
        printf("Angka %d adalah bilangan negatif.\n", number);
    } else {
        printf("Angka %d adalah nol.\n", number);
    }

    if(1){
        printf("Klp 25");
    }
    

    // Contoh penggunaan else if untuk cek genap atau ganjil
    if (number % 2 == 0 && number != 0) {
        printf("Angka %d adalah bilangan genap.\n", number);
    } else if (number % 2 != 0) {
        printf("Angka %d adalah bilangan ganjil.\n", number);
    }

    // 1 and 1 = 1
    // 0 and 1 = 0
    // 1 and 0 = 0
    // 0 and 0 = 0
    // 1 or 1 = 1
    // 0 or 1 = 1
    // 1 or 0 = 1
    // 0 or 0 = 0

    // 1 and 0 and 1


    // Contoh penggunaan switch-case
    char grade;
    printf("\nMasukkan nilai Anda (A, B, C, D, F): ");
    scanf(" %c", &grade); // Spasi sebelum %c penting untuk menangkap input karakter
    grade = 'O';
    switch (grade) {
        case 'A':
            printf("Nilai Anda sangat baik!\n");
            break;
        case 'B':
            printf("Nilai Anda baik.\n");
            break;
        case 'C':
            printf("Nilai Anda cukup.\n");
            break;
        case 'D':
            printf("Nilai Anda kurang.\n");
            break;
        case 'F':
            printf("Anda gagal.\n");
            break;
        default:
            printf("Nilai tidak valid.\n");
    }

    if(0){
        printf("Bintang");
    }else if(9){
        printf("Cahya");
    }else{
        printf("Yashael");
    }
    // while
    while(1){
        printf("Hello Diah");
    }
    // do while
    do{
        printf("Hello Gungmas");
    }while (0);

    // for
    for(1;1;1){
        printf("Hello Lauren");

    }
    
    return 0;
}
