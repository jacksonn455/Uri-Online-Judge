#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;
main()
{
    int n,i=0,numcobaia,contc,contr,conts,totalC,cobaia;
    double percentualC,percentualR,percentualS;
    char c,r,s;

    cin >> n;

    for(i=1; i<=n; i++)
    {
        cin >> cobaia;

        switch (cobaia)
        {
        case  'c':
            contc += numcobaia;
            break;
        case 'r':
            contr += numcobaia;
            break;
        case 's':
            conts += numcobaia;
            break;
        }

    }
    totalC+=numcobaia;
            cout << "Total: " << totalC << " cobaias" << endl;
    cout << "Total de coelhos: " << contc << endl ;
    cout << "Total de ratos: " << contr << endl;
    cout << "Total de sapos: " << conts << endl;
    percentualC = (totalC / 100.0) * contc;
    percentualR = (totalC / 100.0) * contr;
    percentualS = (totalC / 100.0) * conts;
    cout.precision(2);
    cout << fixed << "Percentual de coelhos: " << percentualC << " %" << endl;
    cout << fixed << "Percentual de ratos: " << percentualR << " %" << endl;
    cout << fixed << "Percentual de sapos: " << percentualS << " %" << endl;

    return 0;
}
