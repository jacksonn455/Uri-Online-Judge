#include <iostream>
using namespace std;
int main()
{
    int X, Y, i,aux;
    cin>>X;
    cin>>Y;

    if(X>Y)
    {
        aux = X;
        X = Y;
        Y = aux;
    }

    ///ordenar
    /// 18 10 tem que virar 10 18

    for(i=X+1; i<Y; i=i+1)
    {
        if (i%5==2)
        {
            cout<<i<<endl;
        }
        if(i%5==3)
        {
            cout<<i<<endl;
        }
    }
    return 0;
}
