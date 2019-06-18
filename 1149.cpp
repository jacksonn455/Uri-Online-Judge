#include<iostream>
using namespace std;
int main()
{
    int a,n,s=0,i;

    cin >> a;
    cin >> n;

    while (n <=0 ) {
        cin >> n;
    }
    int cont = 0;
    for(i=a; cont < n; i++)
    {
        s += i;
        cont ++;

    }
    cout << s <<endl;
}
