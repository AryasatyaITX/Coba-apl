// # Latihan Soal 12: Circular Single Linked List (Cek Sirkularitas)
//
// ## Soal 12: Periksa Apakah List Adalah Circular
//
// Kamu diminta melengkapi fungsi untuk mengecek apakah sebuah linked list
// benar-benar circular (node terakhir menunjuk kembali ke head). Soal ini
// melatih pemahaman karakteristik circular linked list.
//
// Konsep Kunci:
// - Circular Linked List: node terakhir menunjuk ke head, bukan nullptr.
// - Deteksi infinite loop: gunakan pointer untuk cek apakah kembali ke head.
// - Kondisi henti: temp == head atau temp == nullptr.

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

/**
 * @brief Cek apakah linked list adalah circular.
 * @param head Pointer ke node pertama list.
 * @return true jika list circular, false jika tidak.
 * @logic
 * 1. Jika head nullptr, list kosong dianggap circular.
 * 2. Mulai dari node setelah head (head->next).
 * 3. Traversal sampai menemukan head lagi atau nullptr.
 * 4. Return true jika ketemu head, false jika ketemu nullptr.
 */
bool isCircular(Node* head) {
    if (head == nullptr) return true;
    Node* temp = head->next;
    // TODO: Lengkapi kondisi traversal untuk cek circular.
    // ---- MULAI KODE DI SINI ----
    while (temp != nullptr && temp != head) {
        temp = temp->next;
    }
    // ---- AKHIR KODE DI SINI ----
    return (temp == head);
}

int main() {
    Node* head = new Node{1, nullptr};
    head->next = head; // Membuat sirkular
    if (isCircular(head)) cout << "List adalah Circular!";
    /* Harusnya output:
       List adalah Circular!
    */
    return 0;
}