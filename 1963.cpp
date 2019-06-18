#include<iostream>
#include<iomanip>
using namespace std;
int main(){

cout << fixed << setprecision(2);

double a=0,b=0,c=0,e=0;

cin >> a;
cin >> b;

e = b/a - 1;
e = e * 100;
cout << e <<"%"<<endl;

}
