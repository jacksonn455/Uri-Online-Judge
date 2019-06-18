#include<iostream>
using namespace std;
int main() {
    int n=0,i,tempo=0;

    cin >> n;

    for(i=0; i<n; i++) {
        cin >> tempo;
        if(tempo>=2015) {
            tempo = tempo - 2015 + 1;
            cout << tempo << " A.C."<<endl;
        } else if(tempo <= 2015) {
            tempo = 2015 - tempo;
           cout << tempo << " D.C."<<endl;
        }
    }
}





