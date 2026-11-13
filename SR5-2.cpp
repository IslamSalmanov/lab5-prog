#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int n;
    cout << "Введите число N: ";
    cin >> n;
    int a;
    cout << "Число знаков после запятой: ";
    cin >> a;
    float e=0;
    for(int i=1; i<=n; i++){
        long long fact=1;
        for(int j=1; j<=i; j++){fact*=j;}
        e+=1.0/fact;
    }
    cout << fixed << setprecision(a);
    cout << "Число e = " << e << "\n";
    return 0;
}