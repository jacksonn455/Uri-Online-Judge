#include<iostream>
#include<iomanip>
#include<cstdio>
using namespace std;


int main() {
    //freopen("testando.in.c","r",stdin);

    int i,j;
    double M[12][12],S=0,x=0,med=0,aux;
    char O;

    cin >> O;

    for(i=0; i<12; i++) {
        for(j=0; j<12; j++) {
            cin >> M[i][j];
        }
    }

    aux=0;
    for(j=7;j<=11;j++){
        for(i=1;i<11;i++){
            S += M[i][j];
            aux = aux + 1;
        }

    }

    cout << fixed << setprecision(1);

    if(O=='S') {
        cout << S <<endl;
    } else {
        med = S /aux;
        cout << med << endl;
    }

    return 0;
}
