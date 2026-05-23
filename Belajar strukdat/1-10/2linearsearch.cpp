// # Latihan Soal 2: Algorithm Complexity (Big-O Analysis)
//
// ## Soal 2: Implementasi Linear Search dan Analisis Kompleksitas
//
// Kamu diminta membuat fungsi pencarian linear untuk mencari sebuah nilai
// di dalam array. Setelah itu, pahami kompleksitas waktunya menggunakan
// notasi Big-O.
//
// Konsep Kunci:
// - Linear Search (Pencarian Beruntun) adalah algoritma paling sederhana.
// - Algoritma ini memeriksa setiap elemen dari awal sampai akhir.
// - Kompleksitas waktu: O(n) karena dalam kasus terburuk harus memeriksa
//   semua n elemen.
// - Best case: O(1) jika target ada di elemen pertama.
// - Worst case: O(n) jika target ada di akhir atau tidak ada.

#include <iostream>
using namespace std;

/**
 * @brief Cari sebuah nilai dalam array menggunakan linear search.
 * @param arr Array yang akan dicari.
 * @param n Jumlah elemen dalam array.
 * @param target Nilai yang dicari.
 * @return true jika target ditemukan, false jika tidak.
 * @logic
 * 1. Telusuri elemen array dari indeks 0 sampai n - 1.
 * 2. Jika arr[i] sama dengan target, kembalikan true.
 * 3. Jika perulangan selesai tanpa menemukan, kembalikan false.
 */
bool cariLinear(int arr[], int n, int target) {

    // TODO: Lengkapi fungsi pencarian linear.
    // ---- MULAI KODE DI SINI ----
    for(int i=0; i < n; i++) {
        if(arr[i] == target) {
            return true;
        }
    }
    // ---- AKHIR KODE DI SINI ----
    return false;
}

int main() {
    int data[] = {12, 45, 7, 19, 22};
    int target = 19;
    if (cariLinear(data, 5, target)) cout << "Target ditemukan!";
    else cout << "Target tidak ditemukan.";
    /* Harusnya output:
       Target ditemukan!
    */
    return 0;
}

/*
ANALISIS:
Berdasarkan sumber, algoritma pencarian beruntun memiliki:
- Kompleksitas Waktu: O(n)
- Nama Kelompok: Lanjar (Linear)
*/