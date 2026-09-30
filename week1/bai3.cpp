#include<iostream>
using namespace std;
int main ()  {
    int n; 
    cin >> n ; 
    int giaithua=1;
    if (n==0) {
        giaithua = 0; }
        else {
    for ( int i=n ; i>=1 ; i--) {
        giaithua*=i;
    }}
    cout << "giai thua cua n la " <<  giaithua ;
}
//độ phức tạp của thuật toán là O(n)
