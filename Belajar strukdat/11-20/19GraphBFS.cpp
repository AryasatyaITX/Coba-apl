// # Latihan Soal 19: Graph (BFS - Breadth First Search)
//
// ## Soal 19: Implementasi BFS dengan Queue Traversal
//
// Kamu diminta melengkapi logika penjelajahan graph menggunakan Breadth First
// Search (BFS). Algoritma ini menggunakan queue untuk mengunjungi node level
// demi level dari node awal.
//
// Konsep Kunci:
// - BFS: penjelajahan melebar (menjelajah tetangga sebelum pergi lebih dalam).
// - Queue: mengelola urutan node yang akan dikunjungi.
// - Visited array: mencegah node dikunjungi lebih dari satu kali.
// - Adjacency list: menyimpan tetangga dari setiap node.

#include <iostream>
#include <vector>
#include <queue>
#include <list>
using namespace std;

/**
 * @brief Lakukan traversal BFS pada graph mulai dari startNode.
 * @param adj Adjacency list graph (list tetangga untuk setiap node).
 * @param startNode Node awal penjelajahan.
 * @param V Jumlah total node dalam graph.
 * @logic
 * 1. Inisialisasi visited array, semua false.
 * 2. Tandai startNode sebagai visited dan masukkan ke queue.
 * 3. Selama queue tidak kosong:
 *    a. Ambil node dari depan queue.
 *    b. Cetak node tersebut.
 *    c. Untuk setiap tetangga yang belum visited, tandai dan masukkan ke queue.
 */
void BFS(vector<list<int>> &adj, int startNode, int V) {
    vector<bool> visited(V, false);
    queue<int> q;

    visited[startNode] = true;
    q.push(startNode);

    while (!q.empty()) {
        int curr = q.front();
        q.pop();
        cout << curr << " ";

        // TODO: Lengkapi logika kunjungi tetangga.
        // ---- MULAI KODE DI SINI ----
        for (int tetangga : adj[curr]) {
            if(!visited[tetangga]) {
                visited[tetangga] = true;
                q.push(tetangga);
            }
        }




        // ---- AKHIR KODE DI SINI ----
    }
}

int main() {
    int V = 4;
    vector<list<int>> adj(V);
    adj[0].push_back(1);
    adj[0].push_back(2);
    adj[1].push_back(2);
    adj[2].push_back(0);
    adj[2].push_back(3);
    
    cout << "BFS dari node 2: ";
    BFS(adj, 2, V);
    /* Harusnya output:
       BFS dari node 2: 2 0 3 1
    */
    return 0;
}