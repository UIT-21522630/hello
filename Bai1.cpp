#include <iostream>
using namespace std;
int input(){
    int n;
    cin>>n;
    return n;
}
int sum(int n, int s){
    if (n>=200000000){
        cout<<"Khong hop le ";
     }
    if (n == 0){
        return s;
    } else {
    
     return (n % 10) + sum(n / 10,s);
    }
}
int main(){
    int n,s=8;
    cout << "nhap n(n<2000000000): ";
    input() 
    cout << sum(input(),s);
}