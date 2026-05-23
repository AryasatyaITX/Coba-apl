#include <iostream>
#include <string>
using namespace std;

struct Barang {
    string namaBarang;
    int harga; // masukkan harga
    int stok;
};

int main() {
    Barang toko[3] = { //arr diperbaikin
        {"Buku Tulis", 5000, 120},
        {"Pena Hitam", 3500, 85},
        {"Penggaris Besi", 7000, 40}
    };
     cout << "Daftar Inventaris Toko" << endl;

    for (int i = 0; i < 3; i++) { //perbaikan loopnya
        cout << "Barang ke-" << (i + 1) << endl;
        cout << "Nama  : " << toko[i].namaBarang << endl;
        cout << "Harga : Rp " <<toko[i].harga << endl;
        cout << "Stok  : " << toko[i].stok << " buah\n" << endl;
    }

    return 0;
}
//perbaikin array of structnya