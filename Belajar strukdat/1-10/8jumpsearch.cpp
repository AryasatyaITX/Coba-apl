// # Latihan Soal 8: Searching (Jump Search)
//
// ## Soal 8: Implementasi Jump Search
//
// Kamu diminta melengkapi algoritma jump search untuk mencari elemen
// dalam array yang sudah terurut. Jump search melompat dengan ukuran
// langkah optimal sebelum melakukan pencarian linear.
//
// Konsep Kunci:
// - Jump Search lebih cepat dari linear search untuk array besar.
// - Langkah optimal adalah sqrt(n) untuk meminimalkan perbandingan.
// - Algoritma: lompat -> periksa -> lompat lagi -> pencarian linear.
// - Kompleksitas: O(sqrt(n)) dalam rata-rata kasus.

#include <algorithm>
#include <cmath>
#include <iostream>
using namespace std;

/**
 * @brief Cari target dalam array terurut menggunakan jump search.
 * @param arr Array yang sudah terurut.
 * @param n Jumlah elemen dalam array.
 * @param target Nilai yang dicari.
 * @return Indeks target jika ditemukan, atau -1 jika tidak ada.
 * @logic
 * 1. Hitung step = sqrt(n).
 * 2. Gunakan prev untuk menyimpan indeks blok sebelumnya.
 * 3. Lompat sebesar step sampai menemukan blok yang mungkin berisi target.
 * 4. Lakukan pencarian linear di dalam blok tersebut.
 */
int jumpSearch(int arr[], int n, int target) {
  // TODO: Lengkapi fungsi jump search dengan perhitungan step dan looping.
  // ---- MULAI KODE DI SINI ----
    int step = (int)sqrt(n);
    int prev = 0;
    while (arr[min(step,n) - 1] < target ) {
        prev = step;
        step +=sqrt(n);
        if (prev >= n)
        return -1;
    }
    while (arr[prev] < target) {
        prev++;
        if(prev = min(step,n)) return -1;
    }
    if(arr[prev] == target ) return prev;
/*atau
      if (n <= 0) return -1;
  int step = (int) sqrt(n);
  int prev = 0;
  // Lompat per blok sampai ketemu blok yang mungkin berisi target
  while (prev < n && arr[min(prev + step, n) - 1] < target) {
    prev += step;
  }
  // Linear search di dalam blok [prev, end)
  int end = min(prev + step, n);
  while (prev < end) {
    if (arr[prev] == target) return prev;
    if (arr[prev] > target) return -1; // karena array terurut (opsional)
    prev++;
  }*/
  // ---- AKHIR KODE DI SINI ----
  return -1;
}

int main() {
  int data[] = {1, 3, 5, 7, 9, 11, 13};

  cout << "Pencarian dimulai dari indeks: " << jumpSearch(data, 7, 9);

  /* Harusnya output:
     Pencarian dimulai dari indeks: 4
  */

  return 0;
}