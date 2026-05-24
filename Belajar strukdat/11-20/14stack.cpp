// # Latihan Soal 14: Stack (Pop with Underflow)
//
// ## Soal 14: Implementasi Pop dengan Penanganan Underflow
//
// Kamu diminta melengkapi operasi pop pada stack sederhana untuk mengambil
// dan mengembalikan elemen teratas (LIFO). Soal ini juga menangani kondisi
// underflow saat mencoba pop dari stack kosong.
//
// Konsep Kunci:
// - Pop: mengambil elemen dari top stack.
// - LIFO: elemen terakhir yang dimasukkan adalah yang pertama keluar.
// - Underflow: kondisi ketika stack kosong dan pop dipanggil.
// - Top berkurang setelah pop berhasil.

#include <iostream>
using namespace std;

int stack[10];
int top = -1;

/**
 * @brief Ambil dan kembalikan elemen dari top stack.
 * @return Nilai elemen top, atau -1 jika underflow.
 * @logic
 * 1. Jika top < 0, stack kosong (underflow).
 * 2. Ambil nilai dari stack[top].
 * 3. Kurangi top sebesar 1.
 * 4. Kembalikan nilai yang diambil.
 */
int pop() {
    // TODO: Lengkapi fungsi pop dengan penanganan underflow.
    // ---- MULAI KODE DI SINI ----
    if(top < 0) {
        cout << "Stack underflow"<<endl;
    }
    else{
        int v =stack[top];
        top--;
        return v;
    }
    // ---- AKHIR KODE DI SINI ----
    return -1;
}

int main() {
    stack[++top] = 100;
    cout << "Data yang dikeluarkan: " << pop() << endl;
    pop(); // Harus Underflow
    /* Harusnya output:
       Data yang dikeluarkan: 100
       Stack Underflow!
    */
    return 0;
}