#include<iostream>
#include<iomanip>
using namespace std;
int main() {

    double a[100];
    int i;

    for(i=0; i<100; i++) {
        cin >> a[i];
        if(a[i]<=10) {
            cout << fixed << setprecision(1);
            cout << "A["<<i<<"] = "<<a[i]<<endl;
        }
    }





}
