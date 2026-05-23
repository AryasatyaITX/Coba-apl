// # Latihan Soal 9: Sorting (Insertion Sort)
//
// ## Soal 9: Implementasi Insertion Sort
//
// Kamu diminta melengkapi algoritma insertion sort dengan mekanisme shifting
// elemen ke kanan sampai posisi yang tepat ditemukan. Sorting ini bekerja
// seperti cara kita mengurutkan kartu di tangan.
//
// Konsep Kunci:
// - Insertion Sort mengurutkan array dengan membangun urutan dari kiri ke kanan.
// - Setiap iterasi, elemen diambil dan disisipkan ke posisi yang tepat.
// - Elemen yang lebih besar digeser ke kanan untuk membuat tempat.
// - Kompleksitas: O(n^2) dalam worst case, O(n) dalam best case.

#include <iostream>
using namespace std;

/**
 * @brief Urutkan array menggunakan insertion sort.
 * @param arr Array yang akan diurutkan.
 * @param n Jumlah elemen dalam array.
 * @logic
 * 1. Mulai dari elemen kedua (i = 1).
 * 2. Simpan elemen saat ini di key.
 * 3. Geser mundur (j = i - 1) selama arr[j] > key.
 * 4. Geser arr[j] ke posisi j + 1.
 * 5. Setelah pergeseran selesai, taruh key di posisi j + 1.
 */
void insertionSort(int arr[], int n) {
    // TODO: Lengkapi fungsi insertion sort dengan shifting elemen.
    // ---- MULAI KODE DI SINI ----
    for(int i = 1;i < n; i++){
        int key = arr[i];
        int j = i -1;

        while(j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
    








    // ---- AKHIR KODE DI SINI ----
}

int main() {
    int data[] = {5, 2, 4, 1, 3};
    insertionSort(data, 5);
    for (int x : data) cout << x << " ";
    /* Harusnya output:
       1 2 3 4 5
    */
    return 0;
}