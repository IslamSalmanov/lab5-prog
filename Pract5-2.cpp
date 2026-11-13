#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int n;
    cout << "Введите ваше число N: ";
    cin >> n;
    long long s=0;
    long long sk=0;
    long long f=1;
    for(int i=1; i<=n; ++i){s+=i; sk+=i*i; f*=i;}
    cout << "Сумма чисел: " << s << "\n";
    cout << "Факториал: " << f << "\n";
    cout << "Сумма квадратов: " << sk << "\n";
    return 0;
}