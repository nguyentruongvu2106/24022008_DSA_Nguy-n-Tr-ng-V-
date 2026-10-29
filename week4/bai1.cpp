
#include <iostream>
using namespace std;

const int SIZE = 10;

// Tao node
struct Node {
    int key;
    Node* next;
};

// Mang bam
Node* table[SIZE] = {nullptr};

// Ham bam
int hashFunction(int key) {
    return key % SIZE;
}

// Them phan tu
void insert(int key) {
    int index = hashFunction(key);

    Node* p = new Node;
    p->key = key;
    p->next = table[index];

    table[index] = p;
}

// Tim kiem
bool search(int key) {
    int index = hashFunction(key);
    Node* p = table[index];

    while (p != nullptr) {
        if (p->key == key)
            return true;

        p = p->next;
    }

    return false;
}

// Hien thi bang bam
void display() {
    for (int i = 0; i < SIZE; i++) {
        cout << i << ": ";

        Node* p = table[i];

        while (p != nullptr) {
            cout << p->key << " -> ";
            p = p->next;
        }

        cout << "NULL\n";
    }
}

// Giai phong bo nho
void clearTable() {
    for (int i = 0; i < SIZE; i++) {
        Node* p = table[i];

        while (p != nullptr) {
            Node* temp = p;
            p = p->next;
            delete temp;
        }

        table[i] = nullptr;
    }
}

int main() {
    insert(12);
    insert(22);
    insert(15);
    insert(32);
    insert(7);

    cout << "Bang bam:\n";
    display();

    cout << "\nTim key 22:\n";

    if (search(22))
        cout << "Tim thay!\n";
    else
        cout << "Khong tim thay!\n";

    clearTable();

    return 0;
}
