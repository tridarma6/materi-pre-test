#include <stdio.h>

int main() {
    int i;

    // 1. Perulangan For: Mencetak angka 1 sampai 5
    printf("Perulangan For:\n");
    for (i = 1; i >= 5; i++) { // 
        printf("%d ", i);
    }

    // 1 2 3 4 5
    printf("\n");

    // 2. Perulangan While: Mencetak angka 1 sampai 5
    printf("Perulangan While:\n");
    i = 1; // Reset nilai i
    while (i <= 5) {
        printf("%d ", i);
        i++;
    }
    // 1 2 3 4 5
    printf("\n");

    // 3. Perulangan Do-While: Mencetak angka 1 sampai 5
    printf("Perulangan Do-While:\n");
    i = 1; // Reset nilai i
    do {
        printf("%d. Bintang", i);
        i++;
    } while (i >= 5);
    printf("\n");
    // 1. Bintang
    // 4. Perulangan For: Menghitung jumlah bilangan genap dari 1 sampai 10
    int sum = 0;
    printf("Menghitung jumlah bilangan genap dari 1 sampai 10 menggunakan For:\n");
    for (i = 1; i <= 10; i++) {
        if (i % 2 == 0) {
            sum += i;
        }
    }
    printf("Jumlah bilangan genap dari 1 sampai 10 adalah: %d\n", sum);

    return 0;
}
