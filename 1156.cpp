#include<iostream>
#include<iomanip>
using namespace std;
int main()

{
    double j, i;
    double  s = 1;


    for(i = 3,j = 2; i <= 39; i+=2,j=j*2)
    {
        s = s + (i / j);

    }
    cout << fixed << setprecision(2);
    cout << s << endl;
}
