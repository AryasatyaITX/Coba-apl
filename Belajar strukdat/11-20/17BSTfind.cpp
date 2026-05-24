// # Latihan Soal 17: Binary Search Tree (Find Minimum Value)
//
// ## Soal 17: Temukan Node dengan Nilai Terkecil di BST
//
// Kamu diminta melengkapi fungsi untuk menemukan node dengan nilai terkecil
// dalam BST. Nilai terkecil selalu berada di ujung paling kiri pohon.
//
// Konsep Kunci:
// - Nilai minimum di BST selalu di left subtree (paling kiri).
// - Traversal kiri: terus bergerak ke left sampai left == nullptr.
// - Node paling kiri adalah node dengan nilai terkecil.

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *left, *right;
};

/**
 * @brief Temukan node dengan nilai minimum dalam BST.
 * @param node Pointer ke node yang akan diperiksa.
 * @return Pointer ke node dengan nilai terkecil.
 * @logic
 * 1. Inisialisasi current = node.
 * 2. Selama current tidak nullptr dan current->left tidak nullptr.
 * 3. Pindahkan current ke left (current = current->left).
 * 4. Kembalikan current sebagai node dengan nilai minimum.
 */
Node* findMin(Node* node) {
    Node* current = node;
    // TODO: Lengkapi perulangan untuk traversal ke kiri.
    // ---- MULAI KODE DI SINI ----
    while (current != nullptr && current->left != nullptr) {
        current = current->left;
    }


    // ---- AKHIR KODE DI SINI ----
    return current;
}

int main() {
    Node* root = new Node{50, new Node{20, new Node{10, nullptr, nullptr}, nullptr}, nullptr};
    cout << "Nilai terkecil: " << findMin(root)->data;
    /* Harusnya output:
       Nilai terkecil: 10
    */
    return 0;
}