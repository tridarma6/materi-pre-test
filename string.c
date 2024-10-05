#include <stdio.h>
#include <string.h>

int main() {
    // 1. Deklarasi dan Inisialisasi String
    char nama[20] = "John Doe";
    printf("Nama: %s\n", nama);

    // 2. Input String dari Pengguna
    char hobi[50];
    printf("Masukkan hobi Anda: ");
    fgets(hobi, sizeof(hobi), stdin); // Menggunakan fgets untuk input string dengan spasi
    // Menghilangkan karakter newline (\n) yang ditambahkan fgets
    hobi[strcspn(hobi, "\n")] = 0;
    printf("Hobi Anda: %s\n", hobi);

    // 3. Menghitung Panjang String
    int panjang = strlen(nama);
    printf("Panjang string 'nama': %d karakter\n", panjang);

    // 4. Menggabungkan Dua String
    char fullName[40] = "Nama lengkap: ";
    strcat(fullName, nama); // Menggabungkan 'fullName' dengan 'nama'
    printf("%s\n", fullName);

    // 5. Menyalin String
    char salinanNama[20];
    strcpy(salinanNama, nama); // Menyalin isi string 'nama' ke 'salinanNama'
    printf("Salinan nama: %s\n", salinanNama);

    // 6. Membandingkan Dua String
    char string1[20] = "apple";
    char string2[20] = "banana";
    int hasil = strcmp(string1, string2);// Membandingkan string1 dengan string2
    if (hasil == 0) {
        printf("String '%s' dan '%s' sama.\n", string1, string2);
    } else if (hasil < 0) {
        printf("String '%s' kurang dari '%s'.\n", string1, string2);
    } else {
        printf("String '%s' lebih besar dari '%s'.\n", string1, string2);
    }

    return 0;
}
