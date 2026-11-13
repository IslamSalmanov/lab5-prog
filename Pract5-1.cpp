#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
    cout << setw(4) << "x" << setw(14) << "sin(x)" << setw(12) << "cos(x)" << setw(14) << "tan(x)" << "\n";
    cout << string(50, '-') << "\n";
    cout << fixed << setprecision(4);
    for(int i=0; i<=10; i++){double x=i*M_PI/10; double y=sin(x); double c=cos(x); double t=tan(x);
        cout << setw(8) << x << setw(10) << y << setw(12) << c << setw(14);
        if(i%10==5){cout << "Нет";}
        else if(i%10==0){cout << 0.0000;}
        else{cout << t;}
        cout << "\n";
        cout << string(50, '-') << "\n";
    }
    return 0;
}