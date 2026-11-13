#include <iostream>
#include <string>
using namespace std;
int main(){
    int n;
    cout << "Введите число N: ";
    cin >> n;
    string s="";
    long long a=0;
    long long b=1;
    for(int i=1; i<=n; ++i){s+=to_string(a)+" "; long long x=a+b; a=b; b=x;}
    cout << "Первые " << n << " чисел Фибоначчи" << "\n";
    cout << s << "\n";
    return 0;
}