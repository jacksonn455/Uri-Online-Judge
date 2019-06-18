#include <iostream>
#include <string>
#include <iomanip>
#include <stdio.h>
#include <sstream>
using namespace std;
int main() {
   // freopen("teste2.in.c","r",stdin);
    char F,M;
    string linha,pares,tamanho,n;
    char sexo;
    int contcaso=0,contpar=0,contF=0,contM=0;

    while(cin >> n) {
        cin.get();
        getline(cin,linha);
        contF=0;
        contM=0;
        contpar=0;
        contcaso++;
        stringstream pares(linha);
        while(pares >> tamanho) {
            pares >> sexo;

            if(tamanho == n) {
                contpar++;

                if(sexo == 'M' ) {
                    contM++;
                } else {
                    contF++;
                }
            }
        }
        if(contcaso > 1) {
            cout << endl;
        }

        cout <<"Caso " << contcaso <<  ":" << endl;
        cout << "Pares Iguais: " << contpar << endl;
        cout << "F: " << contF << endl;
        cout << "M: " << contM << endl;
    }
    return 0;
}
