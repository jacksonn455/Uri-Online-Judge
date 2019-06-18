#include<iostream>
#include<iomanip>
using namespace std;
int main()
{

    int L,i,j;
    double M[12][12],S=0,X=0;
    char T;

    cin  >> L;
    cin >> T;

    for(i=0; i<=11; i++)
    {
        for(j=0; j<=11; i++)
        {
            cin >> M[i][j];
        }
    }
    if(T=='S')
    {
        for(i=0; i<=11;i++)
        {
            S = S + M[L][j];
                cout << fixed << S <<endl;
        }
    }
    if(T=='M')
    {
        for(i=0; i<=11; i++)
        {
            S = S + M[L][j];
        }
         X = S / 12;
    cout << fixed << X <<endl;
    }


}
