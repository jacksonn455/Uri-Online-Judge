#include<iostream>
using namespace std;
int main() {
    int x,i=0,j,n,primo;

    cin >> n;

    for(i=1; i<=n; i++) {
        cin >> x;
        int primo = 1;
        for(j=2; j<x; j=j+1) {
            if(x%j==0 ) {
                primo++;
            }
        }
        if (primo==1) {
            cout << x <<" eh primo" << endl;
        } else
            cout << x <<" nao eh primo"<<endl;
    }

}

