#include <iostream>
using namespace std;
#define MAX 100
int stack[MAX];
int top = -1;

void push(int v) {
    if(top >= MAX) {
        cout << "Stack Overflow!" << endl;
    }
    else {
        top++;
        stack[top] = v;
        cout << v << " Melakukan push ke stack" << endl;
    }
}

int pop() {
    if(top < 0) {
        cout << "Stack Underflow!" << endl;
    }
    else {
        int v = stack[top];
        top--;
        return v;
    }
}

int peek(){
    if(top < 0) {
        cout << "Stack kosong" << endl;
        return -1;
    }
    else {
        return stack[top];
    }
}

//ini codenya yang disempurnain
bool isEmpty()
{
    return (top < 0);
}

int main() {
    push(10);
    push(20);
    push(30);
}