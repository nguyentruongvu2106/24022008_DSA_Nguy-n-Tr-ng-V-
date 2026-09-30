#include<iostream>
using namespace std;
int main() 
{ 
    int n;
    cin >> n;
    float a[n];
    float sum;
    float tbinh=0;
    for (int i=0;i<n;i++) {
        cin >> a[i];
        sum+=a[i];
    }
    tbinh = sum/n;
    for (int i=0;i<n;i++) {
        if( a[i] >= tbinh) {
            cout << a[i] << "  " ;
        }
    }}
    // độ phức tạp của thuật toán là O(n);
