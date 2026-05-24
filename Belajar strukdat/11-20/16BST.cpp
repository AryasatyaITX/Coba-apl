// # Latihan Soal 16: Binary Search Tree (Recursive Search)
//
// ## Soal 16: Implementasi Pencarian pada BST dengan Rekursi
//
// Kamu diminta melengkapi fungsi untuk mencari nilai dalam Binary Search Tree
// menggunakan pendekatan rekursif. Soal ini melatih pemahaman tentang
// karakteristik BST: left < parent < right.
//
// Konsep Kunci:
// - BST Property: left subtree < parent < right subtree.
// - Recursive Search: pilih sub-pohon berdasarkan perbandingan nilai.
// - Base case: ketika root nullptr atau nilai ditemukan.
// - Rekursi ke left atau right sesuai perbandingan dengan key.

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *left, *right;
};

/**
 * @brief Cari nilai dalam BST menggunakan rekursi.
 * @param root Pointer ke root node BST.
 * @param key Nilai yang dicari.
 * @return Pointer ke node berisi key, atau nullptr jika tidak ditemukan.
 * @logic
 * 1. Jika root nullptr atau root->data == key, return root.
 * 2. Jika key < root->data, rekursi ke left subtree.
 * 3. Jika key > root->data, rekursi ke right subtree.
 */
Node* search(Node* root, int key) {
    if (root == nullptr || root->data == key) return root;
    // TODO: Lengkapi logika percabangan rekursif.
    // ---- MULAI KODE DI SINI ----
    if (key < root->data) {
        return search(root->left, key);
    }
    return search(root->right, key);

    // ---- AKHIR KODE DI SINI ----
}

int main() {
    Node* root = new Node{50, new Node{30, nullptr, nullptr}, new Node{70, nullptr, nullptr}};
    if (search(root, 30)) cout << "30 ditemukan!";
    /* Harusnya output:
       30 ditemukan!
    */
    return 0;
}