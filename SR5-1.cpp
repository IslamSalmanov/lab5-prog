#include <iostream>
#include <string>
#include <vector>
#include <ctime>
using namespace std;
int main() {
    srand(time(0));
    cout << "Игра 'Быки и коровы'\n";
    string a = "";
    while (a.length() < 4) {
        int l = rand() % 10;
        string g = to_string(l);
        if (a.find(g) == string::npos){a += g;}
    }
    int s=0;
    while(s==0){
        string n;
        cout << "Введите число: ";
        cin >> n;
        int b=0, c=0;
        for(int i=0; i<4; i++){
            if(a[i]==n[i]){b++;}
            else{for(int j=0; j<4; j++){if(a[i]==n[j]){c++;}}}
        }
        if(b==4){cout << "Вы угадали!" << "\n"; s=100;}
        else{cout << "Быков: " << b << "\n";
            cout << "Коров: " << c << "\n";}
    }
    return 0;
}