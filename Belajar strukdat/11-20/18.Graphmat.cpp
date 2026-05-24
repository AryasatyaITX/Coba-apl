// # Latihan Soal 18: Graph (Adjacency Matrix)
//
// ## Soal 18: Tambahkan Edge pada Adjacency Matrix (Undirected Graph)
//
// Kamu diminta melengkapi fungsi untuk menambahkan edge pada representasi
// matriks graph. Untuk undirected graph, setiap edge harus ditulis dua arah
// (simetris) pada matriks.
//
// Konsep Kunci:
// - Adjacency Matrix: matriks 2D untuk menyimpan hubungan antar node.
// - Undirected Graph: hubungan dua arah (mat[i][j] = mat[j][i]).
// - Directed Graph: hubungan satu arah (hanya mat[i][j]).
// - Nilai 1: ada edge, nilai 0: tidak ada edge.

#include <iostream>
#include <vector>
using namespace std;

/**
 * @brief Tambahkan edge undirected antara node i dan j.
 * @param mat Adjacency matrix (pass by reference).
 * @param i Index node pertama.
 * @param j Index node kedua.
 * @logic
 * 1. Set mat[i][j] = 1 (ada edge dari i ke j).
 * 2. Set mat[j][i] = 1 (ada edge dari j ke i).
 * 3. Ini memastikan graph bersifat undirected (simetris).
 */
void addEdge(vector<vector<int>> &mat, int i, int j) {
    // TODO: Lengkapi pengisian matriks secara simetris.
    // ---- MULAI KODE DI SINI ----
    mat[i][j] = 1;
    mat[j][i] = 1;

    // ---- AKHIR KODE DI SINI ----
}

int main() {
    vector<vector<int>> adjMat(3, vector<int>(3, 0));
    addEdge(adjMat, 0, 2);
    cout << "Hubungan 2 ke 0: " << adjMat[2][0];
    /* Harusnya output:
       Hubungan 2 ke 0: 1
    */
    return 0;
}