// # Latihan Soal 4: Stack (Prinsip LIFO)
//
// ## Soal 4: Implementasi Stack dengan Penanganan Overflow
//
// Kamu diminta melengkapi operasi push pada stack sederhana yang memiliki
// batas kapasitas maksimal. Stack harus menangani kondisi overflow ketika
// mencoba menambah elemen ke stack yang sudah penuh.
//
// Konsep Kunci:
// - Stack adalah struktur data dengan prinsip LIFO (Last In First Out).
// - Push: menambah elemen ke stack.
// - Pop: mengeluarkan elemen dari stack.
// - Overflow: kondisi ketika stack sudah penuh dan tidak bisa menambah elemen.
// - Underflow: kondisi ketika stack kosong dan tidak bisa mengeluarkan elemen.

#include <iostream>
#define MAX 3
using namespace std;

int stack[MAX];
int top = -1;

/**
 * @brief Tambah elemen ke stack dengan penanganan overflow.
 * @param value Nilai yang akan ditambahkan ke stack.
 * @logic
 * 1. Jika top >= MAX - 1, stack sudah penuh, cetak pesan overflow.
 * 2. Jika masih ada ruang, naikkan top terlebih dahulu.
 * 3. Simpan value ke stack[top].
 * 4. Cetak pesan sukses.
 */
void push(int value) {
    // TODO: Lengkapi fungsi push dengan penanganan overflow.
    // ---- MULAI KODE DI SINI ----
    if(top >= MAX -1 ) {
        cout << "Stack overflow tidak bisa menambah 40" << endl;
    }
    else {
        top++;
        stack[top] = value;
        cout << value << " dimasukkan ke stack." << endl;
    }
    // ---- AKHIR KODE DI SINI ----
}

int main() {
    push(10);
    push(20);
    push(30);
    push(40);
    /* Harusnya output:
       10 dimasukkan ke stack.
       20 dimasukkan ke stack.
       30 dimasukkan ke stack.
       Stack overflow! Tidak bisa menambah 40
    */
    return 0;
}