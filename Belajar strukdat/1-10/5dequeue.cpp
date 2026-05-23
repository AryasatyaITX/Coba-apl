// # Latihan Soal 5: Queue (Prinsip FIFO)
//
// ## Soal 5: Implementasi Dequeue dengan Penanganan Underflow
//
// Kamu diminta melengkapi operasi dequeue untuk menghapus elemen paling
// depan dari queue sederhana. Soal ini juga harus menangani kondisi underflow
// ketika queue sudah kosong.
//
// Konsep Kunci:
// - Queue adalah struktur data dengan prinsip FIFO (First In First Out).
// - Enqueue: menambah elemen ke belakang queue.
// - Dequeue: mengeluarkan elemen dari depan queue.
// - Front: pointer ke elemen paling depan.
// - Rear: pointer ke elemen paling belakang.
// - Underflow: kondisi ketika queue kosong.

#include <iostream>
using namespace std;

int queueData[2] = {100, 200};
int front = 0, rear = 1;

/**
 * @brief Hapus dan kembalikan elemen dari depan queue.
 * @return Nilai elemen paling depan, atau -1 jika underflow.
 * @logic
 * 1. Jika front > rear, queue kosong (underflow).
 * 2. Ambil nilai dari queueData[front].
 * 3. Naikkan front sebesar 1.
 * 4. Kembalikan nilai yang diambil.
 */

bool isEmpty() {
    return front == -1 || front > rear;
}
int dequeue() {
    // TODO: Lengkapi fungsi dequeue dengan penanganan underflow.
    // ---- MULAI KODE DI SINI ----
    if(isEmpty()) {
        return -1;
    }
    if (front == -1){
        front = 0;
    }
    int nilai = queueData[front];
    front++;
    return nilai;
    /* atau
    if (front > rear){
    return -1;
    }
    int nilai = queueData[front];
    front++;
    return nilai*/
    // ---- AKHIR KODE DI SINI ----
}

int main() {
    int nilai = dequeue();
    cout << "Data keluar: " << nilai << endl;

    nilai = dequeue();
    cout << "Data keluar: " << nilai << endl;

    nilai = dequeue();
    if (nilai == -1) {
        cout << "Queue underflow!" << endl;
    }
    cout << "Data keluar: " << nilai << endl;
    /* Harusnya output:
       Data keluar: 100
       Data keluar: 200
       Queue underflow!
       Data keluar: -1
    */
    return 0;
}