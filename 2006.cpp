#include<iostream>
using namespace std;
int main()
{

    int t,i,c = 0;
    int n[5];

    cin >> t;

    for(i=0; i<=4; i++)
    {
        cin >> n[i];
        if (n[i] == t)
        {
            c++;
        }
        if(n[i] != t){
            c == 0;
        }
    }

    cout << c;
    return 0;
}
