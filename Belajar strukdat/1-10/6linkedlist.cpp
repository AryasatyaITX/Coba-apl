// # Latihan Soal 6: Single Linked List (Add Last)
//
// ## Soal 6: Tambahkan Node di Akhir Linked List
//
// Kamu diminta melengkapi fungsi untuk menambahkan node baru di akhir
// single linked list. Untuk melakukannya, harus dilakukan traversal dari
// head sampai node terakhir (tail).
//
// Konsep Kunci:
// - Single Linked List: setiap node memiliki data dan pointer next.
// - Head: pointer ke node pertama dalam list.
// - Tail: node terakhir, pointer next-nya bernilai nullptr.
// - Traversal: bergerak dari satu node ke node berikutnya.
// - Untuk add last, kita harus menemukan tail terlebih dahulu.

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
};

/**
 * @brief Tambahkan node baru di akhir single linked list.
 * @param head Reference ke pointer head (agar bisa diubah jika list kosong).
 * @param dataBaru Data yang akan disimpan di node baru.
 * @logic
 * 1. Buat node baru dengan data dataBaru dan next = nullptr.
 * 2. Jika head adalah nullptr, node baru menjadi head.
 * 3. Jika list sudah ada, traversal sampai menemukan tail (temp->next == nullptr).
 * 4. Sambungkan tail dengan node baru.
 */
void addLast(Node *&head, int dataBaru) {
    Node *newNode = new Node{dataBaru, nullptr};
    if (head == nullptr) {
        head = newNode;
    } else {
        // TODO: Lengkapi traversal untuk menemukan tail dan sambungkan node baru.
        // ---- MULAI KODE DI SINI ----
    Node *temp = head;
    while (temp ->next != nullptr) {
        temp = temp->next;
    }
    temp->next = newNode;


        // ---- AKHIR KODE DI SINI ----
    }
}

int main() {
    Node *head = nullptr;
    addLast(head, 10);
    addLast(head, 20);
    cout << "Node pertama: " << head->data << ", Node kedua: " << head->next->data;
    /* Harusnya output:
       Node pertama: 10, Node kedua: 20
    */
    return 0;
}