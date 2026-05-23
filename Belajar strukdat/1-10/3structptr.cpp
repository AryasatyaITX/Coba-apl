// # Latihan Soal 3: Struct & Arrow Operator
//
// ## Soal 3: Mengisi Data Struct Melalui Pointer
//
// Kamu diminta melengkapi fungsi untuk mengisi data sebuah struct melalui
// pointer. Soal ini melatih penggunaan arrow operator (->) untuk mengakses
// anggota struct ketika kita bekerja dengan pointer.
//
// Konsep Kunci:
// - Struct adalah tipe data yang menggabungkan beberapa variabel.
// - Pointer dapat menunjuk ke alamat struct di memori.
// - Untuk mengakses anggota struct lewat pointer, gunakan operator ->.
// - Alternatif: (*ptr).nama sama dengan ptr->nama.

#include <iostream>
#include <string>
using namespace std;

struct Mahasiswa {
    string nama;
    int nim;
};

/**
 * @brief Isi data mahasiswa melalui pointer struct.
 * @param m Pointer ke struct Mahasiswa.
 * @param namaBaru Nama yang akan diisi.
 * @param nimBaru Nomor induk mahasiswa yang akan diisi.
 * @logic
 * 1. Gunakan operator -> untuk mengakses anggota struct.
 * 2. Isi m->nama dengan namaBaru.
 * 3. Isi m->nim dengan nimBaru.
 */
void inputData(Mahasiswa *m, string namaBaru, int nimBaru) {
    // TODO: Lengkapi fungsi untuk mengisi data struct melalui pointer.
    // ---- MULAI KODE DI SINI ----
    m->nama = namaBaru;
    m->nim = nimBaru;

    // ---- AKHIR KODE DI SINI ----
}

int main() {
    Mahasiswa mhs1;
    inputData(&mhs1, "Andi", 220910);
    cout << "Data Mahasiswa: " << mhs1.nama << " (" << mhs1.nim << ")" << endl;
    /* Harusnya output:
       Data Mahasiswa: Andi (220910)
    */
    return 0;
}