#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Введите число: ";
    cin >> n;
    cout << "Прямоугольник:" << "\n";
    for(int i=1; i<=n; i++){cout << string(n, '*') << "\n";}
    cout << "Треугольник:" << "\n";
    for(int k=1; k<=n; k++){cout << string(k, '*') << "\n";}
    cout << "Ёлочка:" << "\n";
    for(int j=1; j<=n; j++){cout << string(n-j, ' ') << string(2*j-1, '*') << "\n";}
    cout << "Ромб:" << "\n";
    for(int o=1; o<=n; o++){cout << string(n-o, ' ') << string(2*o-1, '*') << "\n";}
    for(int p=n-1; p<=n; --p){cout << string(n-p, ' ') << string(2*p-1, '*') << "\n";}
    return 0;
}