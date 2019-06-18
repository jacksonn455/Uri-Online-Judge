#include<iostream>
using namespace std;
int main()
{
    int O=0,i=0,j=0;
    double M[12][12],S=0,X=0,cont=0;
    char T;

    cin >> O;
    cin >> T;

    cout.precision(1);

    for(i=0; i<12; i++)
    {
        for(j=0; j<12; j++)
        {
            cin >> M[i][j];
        }
    }
    if(T=='S')
    {
        for(i=0; i<12; i++)
        {
            if(j > i)
            {
                S = S + M[i][j];
            }
        }
        cout << fixed << S << endl;
        return 0;
    }
    for(j=0; j<12; j++)
    {
        cont+= M[i][j];
    }
    if(T=='M')
    {
        for(i=0; i<12; i++)
        {
            if(j > i)
            {
                S = S + M[i][j];
            }
            S = S + M[i][j];
        }
        X = cont / 12;
        cout << fixed << X << endl;
        return 0;
    }
}

