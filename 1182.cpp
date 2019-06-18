#include<iostream>
using namespace std;
int main(){
    int C,i,j;
    double M[12][12],S,X;
    char T;
    cin >> C;
    cin >> T;
    S = 0;
    cout.precision(1);
    for(i=0;i<12;i++){
        for(j=0;j<12;j++){
            cin >> M[i][j];
        }
    }
    if(T=='S'){
        for(j=0;j<12;j++){
            S = S + M[i][C];
        }
        cout << fixed << S << endl;
    return 0;
    }
    if(T=='M'){
        for(j=0;j<12;j++){
            S = S + M[i][C];
        }
        X = S / 12;
        cout << fixed << X << endl;
    return 0;
    }
    }

