#include <stdio.h>
#include<iostream>

using namespace std;
int main()
{

    int A, B;

    cin >> A;
    cin >> B;

    if(A<=B)
    {
        if(A%2==0 && B%2==0)
        {
            cout << "Sao Multiplos"  << endl;
        }
        else
        {
            cout << "Nao sao Multiplos" << endl;
        }
    }
}
