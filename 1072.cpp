#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n,p=0,t,k=0,i=0;



    cin >> t;
    for (i=1; i<=t; i++)
    {
        cin >>n;

        if(n>=10 and n<=20)
        {
            p++;
        }
        else
        {
            k++;
        }


    }
    cout << p << " in"<<endl;
    cout << k << " out"<<endl;
}
