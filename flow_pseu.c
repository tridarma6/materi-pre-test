/*
Materi tentang Flowchart dan Pseudocode

1. Pengertian Flowchart:
   Flowchart adalah representasi grafis dari langkah-langkah atau alur kerja dalam sebuah proses, algoritma, atau program. 
   Dalam flowchart, setiap langkah digambarkan dalam bentuk simbol, seperti:
   - Oval: Digunakan untuk menunjukkan awal dan akhir program (start/end).
   - Persegi Panjang: Digunakan untuk langkah-langkah proses atau instruksi.
   - Belah Ketupat: Digunakan untuk percabangan atau pengambilan keputusan (decision).
   - Panah: Menunjukkan arah alur program atau proses.

   Contoh:
   Berikut adalah contoh sederhana flowchart untuk program yang mengecek apakah sebuah angka genap atau ganjil:

   Start -> Input Angka -> Decision (Angka % 2 == 0?) -> True (Cetak "Genap") / False (Cetak "Ganjil") -> End

2. Pengertian Pseudocode:
   Pseudocode adalah representasi dari algoritma dalam bentuk tulisan mirip kode, tetapi tidak terikat pada sintaks bahasa pemrograman tertentu. 
   Pseudocode digunakan untuk merancang program sebelum ditulis dalam bahasa pemrograman yang sesungguhnya.

   Contoh Pseudocode untuk mengecek bilangan genap atau ganjil:

   Pseudocode:
    Mulai
    Input angka dari pengguna
    Jika angka mod 2 == 0, maka:
        - Cetak "Angka adalah genap"
    Jika tidak:
        - Cetak "Angka adalah ganjil"
    Selesai

Berikut adalah implementasi pseudocode tersebut dalam bahasa C:
*/

#include <stdio.h>

int main() {

    int a = 12;
    int b = 18;

    if(a != b){
        b *= 2 * b;
        // b = b * 2 * b;
    }else{
        b = a + b * 2;
    }
    printf("%d", b);
    return 0;
}

/*
Penjelasan:
- Program ini mengimplementasikan pseudocode yang telah ditulis di atas.
- Langkah pertama, program meminta pengguna untuk memasukkan sebuah angka.
- Setelah itu, angka tersebut diperiksa menggunakan operator modulus (%) untuk menentukan apakah angka tersebut genap (angka % 2 == 0) atau ganjil.
- Jika benar genap, program mencetak bahwa angka tersebut adalah bilangan genap; jika tidak, program mencetak bahwa angka tersebut adalah bilangan ganjil.

Bagaimana Flowchart dan Pseudocode Membantu:
- **Flowchart** membantu visualisasi alur program dengan jelas sebelum implementasi, sehingga pengembang dapat memahami setiap langkah dengan baik.
- **Pseudocode** membantu merancang logika program secara tertulis, mempermudah proses penerjemahan ke dalam bahasa pemrograman yang sesungguhnya.
*/


