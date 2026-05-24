#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main() {
    // Deklarasi queue untuk menyimpan nama pelanggan (string)
    queue<string> antrean;

    // Menambahkan pelanggan ke dalam antrean
    antrean.push("Andi");
    antrean.push("Budi");
    antrean.push("Citra");

    cout << "Memproses Antrean Kasir:" << endl;
    
    // Looping selama antrean tidak kosong
    while (!antrean.empty()) {
        // Menampilkan elemen antrean paling depan
        cout << "Melayani: " << antrean.front() << endl;
        
        // Mengeluarkan elemen yang sudah dilayani dari antrean
        antrean.pop();
    }

    return 0;
}