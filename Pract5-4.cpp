#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cout << "Введите число N: ";
    cin >> n;
    int f=n;
    vector<int> m;
    int d=2;
    while(d*d<=n){
        while(n%d==0){
            m.push_back(d);
            n/=d;          
        }
        d+=1;
    }
    if(n>1){m.push_back(n);}
    cout << f << " = ";
    for(size_t i=0; i<m.size(); ++i){
        if(i>0) cout << " x ";
        cout << m[i];        
    }
    cout << "\n";            
    return 0;
}