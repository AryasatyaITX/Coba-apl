#include <iostream>
using namespace std;

struct mahasiswa{
string nama;
int nim;
double ipk;
};
struct Node{
mahasiswa data;
Node *next;
Node *prev;
};
int panjangList = 0;
void pause(){
    cout << "Press Enter to continue...";
    cin.ignore(1000, '\n');
    cin.get();
}
void insertLast(Node *&head, Node *&tail) {
    Node *newNode = new Node();
    newNode->prev = tail;   
    newNode->next = NULL;

    if (head == NULL && tail == NULL) {
        head = newNode;
        tail = newNode;
    } else {
        tail->next = newNode; //penambahan code
        tail = newNode;
    }
    panjangList++;
    cout << "Data sudah tersimpan " <<endl;
}   

void print(Node *head) {
    int i = 1;
    while(head != nullptr) {
        cout << i++ << ". Nama: " << head->data.nama
        << ", NIM : " << head->data.nim
        << ", IPK : " << head->data.ipk << endl;
        head = head->next;
    }
    cout << endl;
}

int main() {
    Node *head = NULL;
    Node *tail = NULL;
    int pilihan, posisi;
    do {
        system("cls");
        cout << "===== Double Linked List =====" << endl;
        cout << "1. Tambah di awal" << endl;
        cout << "2. Tambah di akhir" << endl;
        cout << "3. Tambah di posisi tertentu" << endl;
        cout << "4. Keluar" << endl;
        cout << "Pilih menu : ";
        cin >> pilihan;
        switch (pilihan) {
            case 1:
                cout << "Belum ada fungsi" << endl;
                break;
            case 2:
                insertLast(head, tail);
                break;
            case 3:
                cout << "Belum ada fungsi" << endl;
                break;
            case 4:
                cout << "Program selesai..." << endl;
                break;
            default:
                cout << "Pilihan tidak valid!" << endl;
        }
        system("pause");
    } while (pilihan != 4);
    return 0;
}