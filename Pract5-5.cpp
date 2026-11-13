#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int n;
    cout << "Введите число: ";
    cin >> n;
    int c=0;
    int s=0;
    int pr=1;
    int r=0;
    while(n>0){
        int d=n%10;
        c+=1;
        s+=d;
        pr*=d;
        r=r*10+d;
        n/=10;
    }
    cout << "Количество символов: " << c << "\n";
    cout << "Сумма цифр: " << s << "\n";
    cout << "Произведение цифр: " << pr << "\n";
    cout << "Перевернутое число: " << r << "\n";
    return 0;
}