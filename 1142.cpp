#include<iostream>
using namespace std;
int main() {

    int n,i, cont =1;

    cin >> n;

    for(i=1; i<=n; i++) {
        cout << cont << " ";
        cont++;
        cout << cont << " ";
        cont++;
        cout << cont << " PUM" << endl;
        cont+=2;
        }

}
