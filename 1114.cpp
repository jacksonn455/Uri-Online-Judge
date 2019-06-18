#include<iostream>
using namespace std;
int main()
{
    int i=0,j=0;

    for (i = 1; i <=9; i=i+2)
    {
        for (j = 6 + i; j>= 4 + i; j--)
        {
            cout << "I=" << i << " "<< "J="<<j<<endl;

        }
    }

}
