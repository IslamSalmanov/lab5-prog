#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Введите число: ";
    cin >> n;
    int f=n;
    int r=0;
    while(n>0){ r=r*10+(n%10); n/=10;}
    if(r==f){cout << "Число является палиндромом" << "\n"; return 0;}
    else{cout << "Число не является палиндромом" << "\n"; return 0;}
}