#include<iostream>
using namespace std;

void sapxep() {
    int n; 
    cin >> n; 
    int a[n];
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    
    cout << "Mang sau khi sap xep: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}

int main() {
    sapxep();
    return 0;
}
// độ phức tạp là O(n^2)
