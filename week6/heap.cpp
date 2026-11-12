
#include <iostream>
#include <algorithm>
using namespace std;

class Heap {
public:
    int arr[1000];
    int size = 0;
    bool isMax;

    Heap(bool type) {
        isMax = type;
    }

    // Kiem tra thu tu cua 2 phan tu
    bool compare(int a, int b) {
        if (isMax) return a > b;
        return a < b;
    }

    // Them phan tu
    void insert(int x) {
        int i = size;
        arr[size++] = x;

        while (i > 0) {
            int parent = (i - 1) / 2;

            if (compare(arr[i], arr[parent])) {
                swap(arr[i], arr[parent]);
                i = parent;
            }
            else break;
        }
    }

    // Xoa phan tu co gia tri x
    void remove(int x) {
        int pos = -1;

        for (int i = 0; i < size; i++) {
            if (arr[i] == x) {
                pos = i;
                break;
            }
        }

        if (pos == -1) return;

        arr[pos] = arr[--size];

        // Heapify Up
        if (pos > 0 && compare(arr[pos], arr[(pos-1)/2])) {
            while (pos > 0) {
                int parent = (pos-1)/2;

                if (compare(arr[pos], arr[parent])) {
                    swap(arr[pos], arr[parent]);
                    pos = parent;
                }
                else break;
            }
        }

        // Heapify Down
        else {
            while (2*pos + 1 < size) {
                int left = 2*pos + 1;
                int right = 2*pos + 2;
                int best = left;

                if (right < size && compare(arr[right], arr[left]))
                    best = right;

                if (compare(arr[best], arr[pos])) {
                    swap(arr[pos], arr[best]);
                    pos = best;
                }
                else break;
            }
        }
    }

    // In Heap
    void display() {
        for (int i = 0; i < size; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
};

int main() {
    Heap h1(true);  // Max Heap
    Heap h2(false); // Min Heap

    int a[] = {3, 19, 4, 9};

    for (int x : a) {
        h1.insert(x);
        h2.insert(x);
    }

    cout << "Max Heap: ";
    h1.display();

    cout << "Min Heap: ";
    h2.display();

    h1.remove(19);
    h2.remove(3);

    cout << "Max Heap sau khi xoa 19: ";
    h1.display();

    cout << "Min Heap sau khi xoa 3: ";
    h2.display();

    return 0;
}
