#include <stdio.h>

int main() {
    // Tipe data integer (bilangan bulat)
    int age = 25;
    printf("Umur saya: %d\n", age);

    // Tipe data float (bilangan pecahan)
    float height = 175.5;
    printf("Tinggi badan saya: %.1f cm\n", height);

    // Tipe data double (bilangan pecahan dengan presisi lebih tinggi)
    double pi = 3.141592653589793;
    printf("Nilai pi: %.15f\n", pi);

    // Tipe data char (karakter tunggal)
    char grade = 'A';
    printf("Nilai ujian saya: %d\n", grade);

    // Tipe data string (array karakter)
    char name[] = "John Doe";
    printf("Nama saya: %s\n", name);

    // Tipe data unsigned int (bilangan bulat non-negatif)
    unsigned int distance = 150;
    printf("Jarak: %u km\n", distance);

    // Tipe data long (bilangan bulat dengan rentang lebih besar)
    long population = 780000000;
    printf("Populasi dunia: %ld\n", population);

    // Tipe data short (bilangan bulat dengan rentang lebih kecil)
    short temperature = -5;
    printf("Suhu hari ini: %d derajat\n", temperature);

    // Tipe data boolean (diwakili oleh _Bool dalam C)
    _Bool isStudent = 0;  // 1 untuk true, 0 untuk false
    printf("Apakah saya seorang mahasiswa? %d\n", isStudent);

    return 0;
}
