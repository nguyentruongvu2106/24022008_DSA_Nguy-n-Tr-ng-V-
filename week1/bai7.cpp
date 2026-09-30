//a, hàm tình tổng các phần tử trong mảng
#include<iostream>
using namespace std;
void tong() {
    cout << "Nhập số hàng muốn tạo: ";
    int hang ;
    cin >>  hang ;
    cout << " Nhập số cột muốn tạo ";
    int cot ;
    cin  >> cot;
    int sum=0;
    int a[hang][cot];
    for (int i=0;i<hang;i++) {
        for (int j=0;j<cot;j++) {
            cin >> a[i][j];
            sum+= a[i][j];
        }
        
    }
    cout << "Tổng của các phần tử trong mảng là " << " " << sum;
    cout << "\n";
}


void xoa() {
    cout << "Nhập số hàng muốn tạo: ";
     int hang ;
    cin >>  hang ;
    cout << " Nhập số cột muốn tạo: ";
    int cot ;
    cin  >> cot;
    int a[hang][cot];
    
    for (int i=0;i<hang;i++) {
        for (int j=0;j<cot;j++) {
            cin >> a[i][j];}}
            cout << "Nhập hàng muốn xoá : " ;
            int hang_xoa;
            cin >> hang_xoa;
            int b[hang-1][cot];
    for ( int i=0;i<hang_xoa;i++) {
        for (int j=0;j<cot;j++) {
            b[i][j]=a[i][j];
        }
    }
      for ( int i=hang_xoa;i<hang-1;i++) {
        for (int j=0;j<cot;j++) {
            b[i][j]=a[i+1][j];}}
            
     for (int i=0;i<hang-1;i++) {
        for (int j=0;j<cot;j++) {
            cout << b[i][j] << " ";}
            cout << "\n";}}
int main() {
    tong();
    xoa();
}
// độ phức tạp là O(n^2)
            
    
    
    
    
