// # Latihan Soal 1: Array & Pointer (Akses Memori)
//
// ## Soal 1: Tampilkan Data Array dengan Pointer Arithmetic
//
// Kamu diminta melengkapi fungsi untuk menampilkan elemen array menggunakan
// pointer arithmetic. Soal ini melatih pemahaman bahwa array bisa diakses lewat
// alamat memori dengan melakukan penambahan offset pada pointer, bukan hanya
// menggunakan indeks biasa.
//
// Konsep Kunci:
// - Pointer adalah variabel yang menyimpan alamat memori.
// - Array dalam C++ adalah pointer ke elemen pertama.
// - Pointer arithmetic: *(ptr + i) sama dengan ptr[i].
// - Dengan pointer arithmetic, kita bisa mengakses elemen array tanpa indeks.

#include <iostream>
using namespace std;

/**
 * @brief Tampilkan seluruh elemen array menggunakan pointer arithmetic.
 * @param ptr Pointer ke elemen pertama array.
 * @param n Jumlah elemen dalam array.
 * @logic
 * 1. Gunakan perulangan dari i = 0 sampai i < n.
 * 2. Akses elemen dengan *(ptr + i) atau ptr[i].
 * 3. Cetak setiap nilai dengan format "Nilai: X".
 * 4. Setiap nilai harus dicetak di baris terpisah.
 */
void cetakArray(int *ptr, int n) {
    for(int i=0; i < n; i++) {
        cout << "Nilai : " << *(ptr + i) <<endl;
    }
    // TODO: Lengkapi fungsi untuk menampilkan array menggunakan pointer arithmetic.
    // ---- MULAI KODE DI SINI ----



    // ---- AKHIR KODE DI SINI ----
}

int main() {
    int data[] = {10, 20, 30, 40, 50};
    int n = 5;
    cout << "Daftar Nilai Array:" << endl;
    cetakArray(data, n);
    /* Harusnya output:
       Daftar Nilai Array:
       Nilai: 10
       Nilai: 20
       Nilai: 30
       Nilai: 40
       Nilai: 50
    */
    return 0;
}