#include<string>
#include<string.h>
#include<iostream>
using namespace std;
int main() {

    int n,cont1=0,cont=0,i=0,soma=0,j=0;
    string led;

    cin >> n;

    for(j=0;j<n;j++){
    cin >> led;



    for(i=0; i<led.size(); i++) {
        if(led[i] == '1') {
            cont +=2;
        }
        if((led[i] == '2') or (led[i] == '5') or (led[i] == '3')) {
            cont +=5;
        }
        if(led[i] == '4') {
            cont +=4;
        }

        if((led[i] == '6') or (led[i] == '9') or (led[i] == '0')) {
            cont +=6;
        }
        if(led[i] == '7') {
            cont +=3;
        }
        if(led[i] == '8') {
            cont +=7;
        }
    }

    cout << cont << " " << "leds"<<endl;
    cont = 0;
    }

    return 0;
}
