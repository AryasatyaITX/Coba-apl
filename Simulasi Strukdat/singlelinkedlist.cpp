#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
};
Node* head = NULL;

bool isEmpty(){
    return head==NULL;
}

void addLast(Node *&head, int databaru) {
    Node *nodeBaru = new Node;
    //melengkapi nodebaru
    nodeBaru->data = databaru; 
    nodeBaru->next = nullptr;
     if (head == nullptr){
        head = nodeBaru;
        return;
        }
    Node *temp = head; //headnya mana?
    while (temp->next != nullptr) {
            temp = temp->next;
    }
    temp-> next = nodeBaru;
}

void display(Node *head) {
    Node *temp = head;

    while(temp != nullptr) {
        cout << temp ->data << " ->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    addLast(head, 10);
    addLast(head, 30);
    addLast(head, 45);

    cout << "isi linked list : " <<endl;
    display(head);
    return 0;
}