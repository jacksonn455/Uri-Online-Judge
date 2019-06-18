#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
int main() {

    double a,b,c,A,R,r,p,Av,Az,Am;


    while( cin >> a >> b >> c) {
        p = (a + b + c) /2;
        A = sqrt(p*(p - a)*(p - b)*(p - c));
        R = (a*b*c)/(4*A);
        r = A/p;
        Av = (M_PI * r * r);
        Az = (A - Av);
        Am = (M_PI * R * R) - A;
        cout << fixed << setprecision(4);
        cout << Am << " " << Az << " " << Av <<endl;
    }
}
