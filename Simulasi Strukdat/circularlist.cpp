#include <iostream>
using namespace std;

struct Mahasiswa {
    string nama;
    int nim;
    double ipk;
};

struct Node {
    Mahasiswa data;
    Node *next;
    Node *prev;
};

void addFirst(Node *&head, Node *&tail) { //++ paramter head
    Node *nodeBaru = new Node(); // perbaikan spasi pada Newnode
    if (head != nullptr) {
        nodeBaru->next = head;
        nodeBaru->prev = tail; //tambahkan prev
        head->prev = nodeBaru; //tambahkan nodebaru
        tail->next = nodeBaru;
        head = nodeBaru; // tambahkan head
    } else {
        head = nodeBaru; // head
        tail = nodeBaru; // tail
    }
}

void display(Node *head, bool isHeadToTail) {
    if (head == nullptr) {
        cout << "---------------------------" << endl;
        cout << "Linked List Kosong" << endl;
        cout << "---------------------------" << endl;
        return;
    }

    Node *temp = (isHeadToTail) ? head : head->prev;
    cout << "---------------------------" << endl;
    do {
        cout << "Nama: " << temp->data.nama << endl;
        cout << "NIM : " << temp->data.nim << endl;
        cout << "IPK : " << temp->data.ipk << endl;
        cout << "---------------------------" << endl;
        temp = (isHeadToTail) ? temp->next : temp->prev;
    } while (temp != head);
}

int main() {
    Node *HEAD = nullptr;
    Node *TAIL = nullptr;
    int pilihan;

    while (true) {
        cout << "Program linked list" << endl;
        cout << "1. Add First" << endl;
        cout << "2. Add Last" << endl;
        cout << "3. Delete Node" << endl;
        cout << "4. Display" << endl;
        cout << "9. Exit Program" << endl;
        cout << "Masukan pilihan : ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                addFirst(HEAD, TAIL);
                break;
            case 2:
                cout << "blm ada";
                break;
            case 3:
                cout << "blm ada";
                break;
            case 4: {
                cout << "Display" << endl;
                cout << "1. HEAD to TAIL" << endl;
                cout << "2. TAIL to HEAD" << endl;
                cout << "Masukan pilihan : ";
                cin >> pilihan;
                if (pilihan == 1) {
                    display(HEAD, true);
                } else if (pilihan == 2) {
                    display(HEAD, false);
                } else {
                    cout << "Pilihan tidak ada" << endl;
                }
                break;
            }
            case 9:
                cout << "Exit Program" << endl;
                return 0;
            default:
                cout << "Pilihan tidak ada" << endl;
        }
    }
    return 0;
}