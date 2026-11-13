#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Введите число: ";
    cin >> n;
    if(!cin){cout << "Это не число" << "\n"; return 0;}
    int s=1, i=2;
    while(i*i<=n){if(n%i==0){s+=i; if(!(i==n/i)){s+=n/i;}} i+=1;}
    if(s==n && n>1){cout << "Число совершенное" << "\n";}
    else{cout << "Число несовершенное" << "\n";}
    return 0;
}