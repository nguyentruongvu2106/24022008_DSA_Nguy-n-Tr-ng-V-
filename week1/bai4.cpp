#include<iostream>
using namespace std;
    void rut_gon () {
        int a;
        int b;
        cin >> a >> b;
        int UCLN =1 ;
        for (int i=1 ; i<=a ;i++) {
            if (a%i==0 && b%i==0) {
                UCLN=i;
            }
        }
        a=a/UCLN;
        b=b/UCLN;
        cout << a << "/" << b;
        
    }
    int main() {
        rut_gon();
        return 0;
    }
    // Độ phức tạp của thuật toán là 0(1);
