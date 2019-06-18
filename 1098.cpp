#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double a,b, media;



        cin >> a;

    while(a>10 or a<0 );
    {
        cout << "nota invalida" <<endl;
        cin >> a;
    }
        cin >> b;
    while(b>10 or b<0 );
    {
        cout << "nota invalida" <<endl;
        cin >> b;
    }

        media = (a + b)/2;
         cout << fixed << setprecision(2);
        cout << "media = " << media <<endl;

        return 0;
    }
