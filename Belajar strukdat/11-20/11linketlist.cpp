// # Latihan Soal 11: Single Linked List (Traversal & Count)
//
// ## Soal 11: Hitung Jumlah Node dalam Linked List
//
// Kamu diminta melengkapi fungsi untuk menghitung berapa banyak elemen (node)
// yang ada dalam sebuah linked list. Soal ini melatih traversal dasar dengan
// menghitung node saat bergerak dari head hingga akhir list.
//
// Konsep Kunci:
// - Traversal: bergerak dari satu node ke node berikutnya.
// - Counter: menambah penghitung setiap kali mengunjungi node.
// - Kondisi berhenti: ketika temp != nullptr.

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

/**
 * @brief Hitung jumlah node dalam linked list.
 * @param head Pointer ke node pertama list.
 * @return Jumlah total node dalam list.
 * @logic
 * 1. Inisialisasi counter dengan 0.
 * 2. Gunakan pointer temp mulai dari head.
 * 3. Selama temp tidak nullptr, tambah counter dan lanjut ke node berikutnya.
 * 4. Kembalikan counter sebagai hasil akhir.
 */
int hitungNode(Node* head) {
    int count = 0;
    Node* temp = head;
    // TODO: Lengkapi perulangan untuk menghitung jumlah node.
    // ---- MULAI KODE DI SINI ----
    while (temp!= nullptr) {
        count++;
        temp = temp->next;
    }




    // ---- AKHIR KODE DI SINI ----
    return count;
}

int main() {
    Node* head = new Node{10, new Node{20, new Node{30, nullptr}}};
    cout << "Jumlah node dalam list: " << hitungNode(head) << endl;
    /* Harusnya output:
       Jumlah node dalam list: 3
    */
    return 0;
}