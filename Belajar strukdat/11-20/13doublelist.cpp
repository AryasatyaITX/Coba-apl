// # Latihan Soal 13: Double Linked List (Insert at Specific Position)
//
// ## Soal 13: Sisipkan Node di Tengah Double Linked List
//
// Kamu diminta melengkapi fungsi untuk menyisipkan node baru di antara dua
// node yang sudah ada. Soal ini menggabungkan manajemen 4 pointer (prev dan
// next) untuk mempertahankan struktur double linked list.
//
// Konsep Kunci:
// - Insert After: menyisipkan node setelah node yang ditunjuk temp.
// - Update 4 pointer: newNode->prev, newNode->next, node sebelum, node sesudah.
// - Double linked list memerlukan penyesuaian dua arah.

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next, *prev;
};

/**
 * @brief Sisipkan node baru setelah node yang ditunjuk temp.
 * @param temp Pointer ke node setelah mana node baru akan disisipkan.
 * @param dataBaru Data yang akan disimpan di node baru.
 * @logic
 * 1. Buat node baru dengan data dataBaru.
 * 2. Atur newNode->next ke node yang ada di temp->next.
 * 3. Atur newNode->prev ke temp.
 * 4. Jika temp->next bukan nullptr, atur prev dari node setelahnya.
 * 5. Atur temp->next ke newNode.
 */
void insertAfter(Node* temp, int dataBaru) {
    if (temp == nullptr) return;
    Node* newNode = new Node{dataBaru, temp->next, temp};
    // TODO: Lengkapi penyambungan pointer dua arah.
    // ---- MULAI KODE DI SINI ----
    if(temp->next != nullptr) {
        temp->next->prev = newNode;
    }
    temp->next = newNode;

    // ---- AKHIR KODE DI SINI ----
}

int main() {
    Node* head = new Node{10, nullptr, nullptr};
    insertAfter(head, 20);
    cout << "Head: " << head->data << ", Setelahnya: " << head->next->data;
    /* Harusnya output:
       Head: 10, Setelahnya: 20
    */
    return 0;
}