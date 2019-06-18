#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;
int main()
{
    int x=0,y=0,a=0,b=0,c=0,i=0;

    cin >> x;
    cin >> y;

    a=1;
    b=1;
    c=1;

    for(i=1; i<y; i++)
    {
        a = i;
        b = i+1;
        c = i+2;

        cout << a <<" " << b <<" " << c <<endl;
    }

    return 0;
}
