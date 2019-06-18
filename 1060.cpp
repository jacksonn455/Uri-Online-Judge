#include<iostream>
#include<iomanip>
using namespace std;
int main(){

int i=0,p=0;
double v=0,m=0,k=0;

for(i=1;i<=6;i++){
    cin >> v;
    if(v>0){
        p++;
        k+= v;
    }
}
m = ( k/p);
cout << fixed <<setprecision(1);
cout << m << endl;
cout << p <<" valores positivos" << endl;
}
