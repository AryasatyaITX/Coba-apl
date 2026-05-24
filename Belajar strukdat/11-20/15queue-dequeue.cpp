// # Latihan Soal 15: Queue (Enqueue with Reset Logic)
//
// ## Soal 15: Implementasi Enqueue dengan Inisialisasi Front
//
// Kamu diminta melengkapi operasi enqueue (penambahan elemen) pada queue
// sederhana. Saat elemen pertama masuk, front harus diatur ke 0 agar queue
// berfungsi dengan benar.
//
// Konsep Kunci:
// - Enqueue: menambah elemen di rear (belakang) queue.
// - FIFO: elemen pertama yang masuk adalah yang pertama keluar.
// - Front: pointer ke elemen paling depan (diinisialisasi saat enqueue pertama).
// - Rear: pointer ke elemen paling belakang.

#include <iostream>
#define MAX 5
using namespace std;

int queue[MAX];
int front = -1, rear = -1;

/**
 * @brief Tambahkan elemen ke belakang queue.
 * @param value Nilai yang akan ditambahkan.
 * @logic
 * 1. Jika rear sudah di MAX-1, queue penuh (overflow).
 * 2. Jika front masih -1, ini adalah elemen pertama, atur front ke 0.
 * 3. Naikkan rear sebesar 1.
 * 4. Simpan value di queue[rear].
 */
void enqueue(int value) {
    if (rear == MAX - 1) return;
    // TODO: Lengkapi inisialisasi front dan penambahan elemen.
    // ---- MULAI KODE DI SINI ----
    if(front == -1) {
        front = 0;
    }
    rear++;
    queue[rear] = value;
    cout << value <<endl; // ---- AKHIR KODE DI SINI ----
}

int main() {
    enqueue(10);
    cout << "Front: " << front << ", Rear: " << rear;
    /* Harusnya output:
       Front: 0, Rear: 0
    */
    return 0;
}