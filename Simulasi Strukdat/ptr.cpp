#include <iostream>
using namespace std;

int main() {
    int skor = 100;
    
    int *ptr = &skor; //ini pointernya mana

    cout << "Nilai skor adalah: " << *ptr << endl;

    return 0;
}

//perbaikin untuk pointernya