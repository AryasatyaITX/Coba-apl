#include <iostream>
using namespace std;

int main() {
    int nilai[5] = {85, 90, 78, 92, 88}; //buat variabel nilai

    cout << "Daftar Nilai Siswa" << endl;
    
    for (int i = 0; i < 5; i++) {
        cout << "Nilai siswa ke-" << (i + 1) << ": " << nilai[i] << endl;
    }

    return 0;
}
//perbaikin array dan includenya