#include<iostream>
using namespace std;
int main() {

    int i=0,neg=0,posi=0,par=0,imp=0,v=0;

    for(i=1; i<=5; i++){

        cin >> v;

    if(v<0) {
        neg++;
    }
    if(v>0) {
        posi++;
    }
    if(v%2==0) {
        par++;
    }
    if(v%2!=0) {
        imp++;
    }
    }
    cout << posi <<" valores positivos"<<endl;
    cout << par <<" valores pares" << endl;
    cout << neg << " valores negativos" << endl;
    cout << imp <<" valores impares"<<endl;
}

