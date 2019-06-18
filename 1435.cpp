#include<iostream>
using namespace std;
int main() {

    int n,i,j,h,m[100][100];


    cin >> n;

    while(n) {
        for(i=0; i<n; i++) {
            m[i][j] = 1;
        }

        for(int h= 2; h<n; h++) {
            for(i=0; i<n; i++) {
                m[i][i+(h-1)] = h;
                m[i][i-(h-1)] = h;
            }
        }
        for(i=0; i<n; i++) {
            for(j=0; j<n; j++) {
                cout << m[i][j] <<" ";
            }
        }
    }
    cout << endl;

}
