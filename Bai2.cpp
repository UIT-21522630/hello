#include <iostream>
using namespace std;
int tong(int n){
    if (n < 10){
        return n;
    } else{
        return (n % 10) + tong(n / 10);
    }
}
int main(){
    int n;
    cout << "nhap n";
    cin >> n;
    cout << tong(n);
}