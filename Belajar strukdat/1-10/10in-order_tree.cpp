// # Latihan Soal 10: Binary Search Tree (BST)
//
// ## Soal 10: Implementasi Traversal In-Order pada BST
//
// Kamu diminta melengkapi fungsi untuk melakukan traversal in-order pada
// Binary Search Tree. Traversal ini harus mengikuti urutan kiri, root,
// lalu kanan untuk menghasilkan data terurut dari kecil ke besar.
//
// Konsep Kunci:
// - Binary Search Tree: struktur pohon dengan aturan left < parent < right.
// - Traversal in-order: kunjungi left subtree, root, lalu right subtree.
// - Hasil in-order pada BST menghasilkan urutan terurut dari kecil ke besar.
// - Traversal lainnya: pre-order, post-order, level-order.

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *left, *right;
};

/**
 * @brief Lakukan traversal in-order pada Binary Search Tree.
 * @param root Pointer ke root node dari BST.
 * @logic
 * 1. Base case: jika root adalah nullptr, hentikan rekursi.
 * 2. Rekursi ke subtree kiri: inorder(root->left).
 * 3. Cetak data root.
 * 4. Rekursi ke subtree kanan: inorder(root->right).
 * 5. Urutan output akan terurut dari kecil ke besar.
 */
void inorder(Node *root) {
    // TODO: Lengkapi fungsi traversal in-order untuk BST.
    // ---- MULAI KODE DI SINI ----
    if(root == nullptr) return;
    
    inorder(root ->left);
    cout << root ->data << " ";
    inorder(root ->right);



    // ---- AKHIR KODE DI SINI ----
}

int main() {
    Node *root = new Node{50, nullptr, nullptr};
    root->left = new Node{30, nullptr, nullptr};
    root->right = new Node{70, nullptr, nullptr};
    
    cout << "In-order Traversal: ";
    inorder(root);
    cout << endl;
    /* Harusnya output:
       In-order Traversal: 30 50 70
    */
    return 0;
}