#include<iostream>
#include <iomanip>

using namespace std;
int main(){


    double area, raio;

    cin>> raio;

    area = 3.14159 * (raio * raio);

    cout << fixed << setprecision(4);

    cout << "A=" << area << endl;
}
