#include<iostream>
using namespace std;
int main()
{
    int n[10],i=0,x=0;

    cin >> x;
    n[0] = x;
    for(i=1; i<=9; i++)
    {
        n[i] = n[i-1]*2;
    }
     for(i=0; i<=9; i++)
        {
            cout << "N[" << i <<"]" << " = " << n[i]<<endl;
        }
}
