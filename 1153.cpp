#include<iostream>

using namespace std;
int main()
{
    int n,i,f;

    cin >> n;

    f=1;
    for(i=1;i<=n;i++)
    {
        f*=i;
    }
cout << f <<endl;

}
