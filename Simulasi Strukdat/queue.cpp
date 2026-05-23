#include <iostream>
#include <queue>
#include <__>
using namespace std;

int main() {
    // Deklarasi queue untuk menyimpan nama pelanggan (string)
    queue<__> antrean;

    // Menambahkan pelanggan ke dalam antrean
    antrean.push("Andi");
    antrean.__("Budi");
    antrean.__("Citra");

    cout << "Memproses Antrean Kasir:" << endl;
    
    // Looping selama antrean tidak kosong
    while (!antrean.__()) {
        // Menampilkan elemen antrean paling depan
        cout << "Melayani: " << antrean.__() << endl;
        
        // Mengeluarkan elemen yang sudah dilayani dari antrean
        antrean.__();
    }

    return 0;
}