
#include <iostream>
using namespace std;

const int SIZE = 10;
int arr[SIZE];

// Ham bam
int hashFunction(int key) {
    return key % SIZE;
}

// Them phan tu
void insert(int key) {
    int index = hashFunction(key);

    while (arr[index] != -1) {
        index = (index + 1) % SIZE;
    }

    arr[index] = key;
}

// Tim kiem
bool search(int key) {
    int index = hashFunction(key);

    while (arr[index] != -1) {
        if (arr[index] == key)
            return true;

        index = (index + 1) % SIZE;
    }

    return false;
}

int main() {
    // Khoi tao bang bam
    for (int i = 0; i < SIZE; i++) {
        arr[i] = -1;
    }

    // Them cac phan tu
    insert(12);
    insert(22);
    insert(32);
    insert(15);
    insert(7);

    // Hien thi bang bam
    for (int i = 0; i < SIZE; i++) {
        cout << i << ": " << arr[i] << '\n';
    }

    // Tim kiem
    int key;
    cout << "Nhap key can tim: ";
    cin >> key;

    if (search(key))
        cout << "Tim thay!";
    else
        cout << "Khong tim thay!";

    return 0;
}
