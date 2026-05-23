// # Latihan Soal 7: Double Linked List (Delete First)
//
// ## Soal 7: Hapus Node Pertama dari Double Linked List
//
// Kamu diminta melengkapi fungsi untuk menghapus node pertama pada double
// linked list. Setelah node pertama dihapus, pointer prev pada head baru
// harus diperbarui agar tidak menunjuk ke node yang sudah dihapus.
//
// Konsep Kunci:
// - Double Linked List: setiap node memiliki prev dan next pointer.
// - Head: node pertama, prev-nya harus selalu nullptr.
// - Delete first: menghapus head dan membuat node berikutnya menjadi head baru.
// - Pointer prev pada head baru harus selalu nullptr.

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
    Node *prev;
};

/**
 * @brief Hapus node pertama (head) dari double linked list.
 * @param head Reference ke pointer head.
 * @logic
 * 1. Jika head adalah nullptr, tidak ada yang dihapus.
 * 2. Simpan head lama di variabel del untuk dihapus.
 * 3. Jika head->next bukan nullptr, geser head ke node berikutnya.
 * 4. Atur head->prev menjadi nullptr (head baru tidak punya prev).
 * 5. Jika hanya ada satu node, head menjadi nullptr.
 * 6. Dealokasi memori dari node yang dihapus.
 */
void deleteFirst(Node *&head) {
    if (head == nullptr) return;
    Node *del = head;
    // TODO: Lengkapi fungsi delete first untuk double linked list.
    // ---- MULAI KODE DI SINI ----
    if(head->next !=nullptr){
        head = head->next;
        head->prev = nullptr;
    } else{
        head = nullptr;
    }
    // ---- AKHIR KODE DI SINI ----
    delete del;
}

int main() {
    Node *n1 = new Node{10, nullptr, nullptr};
    Node *n2 = new Node{20, nullptr, n1};
    n1->next = n2;
    Node *head = n1;

    deleteFirst(head);
    cout << "Head baru: " << head->data;
    /* Harusnya output:
       Head baru: 20
    */
    return 0;
}