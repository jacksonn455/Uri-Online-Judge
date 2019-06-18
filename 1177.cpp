#include<iostream>
using namespace std;
int main() {

    int t,i,n[1000],j;
    int cont=0;

    cin >> t;

    for(i=0; i<1000; i++) {
        for(j=0; j<t; j++) {
            n[i] = j;
            cout << "N["<<i<<"] = "<<n[i]<<endl;
        }
    }
}
