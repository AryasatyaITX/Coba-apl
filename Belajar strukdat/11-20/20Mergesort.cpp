// # Latihan Soal 20: Sorting & Pointer (Merge Sort - Merge Phase)
//
// ## Soal 20: Implementasi Merge Phase dari Merge Sort
//
// Kamu diminta melengkapi logika penggabungan dua sub-array yang sudah terurut
// kembali ke array utama. Soal ini menggabungkan konsep sorting, struct,
// dan pointer arithmetic secara bersamaan.
//
// Konsep Kunci:
// - Merge Sort terdiri dari divide (split) dan merge (gabung).
// - Merge Phase: menggabungkan dua array terurut menjadi satu array terurut.
// - Pointer arithmetic: mengakses elemen dengan *(ptr + i).
// - Perbandingan: memilih elemen terkecil dari kedua array.

#include <iostream>
#include <string>
using namespace std;

struct Produk {
    string nama;
    int harga;
};

/**
 * @brief Gabungkan dua sub-array terurut menjadi satu array terurut.
 * @param arr Array utama yang akan diisi hasil gabungan.
 * @param left Indeks awal sub-array pertama.
 * @param mid Indeks akhir sub-array pertama / awal sub-array kedua.
 * @param right Indeks akhir sub-array kedua.
 * @logic
 * 1. Buat array sementara L dan R untuk menyimpan sub-array.
 * 2. Inisialisasi i = 0 (index L), j = 0 (index R), k = left (index arr).
 * 3. Bandingkan (L + i)->harga dengan (R + j)->harga.
 * 4. Salin elemen yang lebih kecil ke arr, naikkan pointer-nya.
 * 5. Setelah salah satu habis, salin sisa dari array yang masih ada.
 */
void merge(Produk* arr, int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;
    
    Produk *L = new Produk[n1];
    Produk *R = new Produk[n2];
    
   for (int i = 0; i < n1; i++)
        *(L + i) = *(arr + left + i);

    // copy data ke array R
    for (int j = 0; j < n2; j++)
        *(R + j) = *(arr + mid + 1 + j);
    
    // Copy data ke L dan R (diasumsikan sudah diisi sebelumnya)
    int i = 0, j = 0, k = left;
    
    // TODO: Lengkapi logika perbandingan dan merge pointer.
    // ---- MULAI KODE DI SINI ----
    while(i < n1 && j < n2) {
        if ((L + i)-> harga <= (R + j)-> harga){
            *(arr + k) = *(L + i);
            i++;
        }else {
            *(arr + k) = *(L + i);
            j++;
        }
        k++;
    }
    while (i < n1) {
        *(arr + k) = *(L + i);
        i++; k++;
    }
    while (j < n2) {
        *(arr + k) = *(R + i);
        j++; k++;
    }


















    // ---- AKHIR KODE DI SINI ----
    


    // ---- AKHIR KODE DI SINI ----
    
    delete[] L;
    delete[] R;
}

int main() {
    cout << "Merge Sort membutuhkan ketelitian dalam pointer arithmetic dan sorting logic.";
    /* Harusnya output:
       Merge Sort membutuhkan ketelitian dalam pointer arithmetic dan sorting logic.
    */
    return 0;
}