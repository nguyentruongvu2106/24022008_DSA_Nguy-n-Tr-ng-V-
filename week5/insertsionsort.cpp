#include <iostream>
using namespace std;

int main() {
    int a[] = {5, 3, 8, 1, 2};
    int n = 5;

    for (int i = 1; i < n; i++) {
        int x = a[i];
        int j = i - 1;

        while (j >= 0 && a[j] > x) {
            a[j + 1] = a[j];
            j--;
        }

        a[j + 1] = x;
    }

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}
