#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n,i;



    cin >> n;
    for (i=1;i<=n;i++)
    {
        cin>>n;
        if((n%2==0)and(n<0))
        {
            cout << "EVEN NEGATIVE"<<endl;
        }
        if((n%2==0)and(n>0))
        {
            cout << "EVEN POSITIVE"<<endl;
        }
        if((n%2!=0)and(n<0))
        {
            cout << "ODD NEGATIVE"<<endl;
        }
        if((n%2!=0)and(n>0))
        {
            cout << "ODD POSITIVE"<<endl;
        }
        if (n==0)
        {
            cout << "NULL"<<endl;
        }
    }
}
