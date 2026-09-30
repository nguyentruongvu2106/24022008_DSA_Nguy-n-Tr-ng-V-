a, xoá phần tử ở vị trí k
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int k; 
    cin >> k; 
    if (k >= 0 && k < n) {
        for (int i = k; i < n - 1; i++) {
            a[i] = a[i + 1];
        }
        cout << "Mang sau khi xoa la: ";
        for (int i = 0; i < n - 1; i++) {
            cout << a[i] << " ";
        }
    } else {
        cout << "Vi tri k khong hop le!";
    }
    
    return 0;
}
// độ phức tạp là O(n)
// b, chèn phần tủ y vào ví trí thứ m trong dãy
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int y;
    cout << " nhập phần tử y muốn chèn: " ;
    cin >> y;
    int m;
    cout << "nhập ví trí muốn chèn: ";
    cin >> m;
    int b[n+1];
    for (int i=0;i<m;i++) {
        b[i]=a[i];
    }
    b[m]=y;
    for (int i=m+1;i<n+1;i++) {
        b[i]=a[i-1];
    }
    for (int i=0;i<n+1;i++) {
        cout << b[i] << " ";
    }}
    // Độ phức tạp là O(n)

  
