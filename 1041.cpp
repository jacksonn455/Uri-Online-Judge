#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double x, y;


    if ( (x = 0) && (y = 0))
    {
        cout << "Origem" << endl;
    }
    if ( (x > 0) && (y < 0))
    {
        cout << "Q4" << endl;
    }
      if ( (x > 0) && (y > 0))
    {
        cout << "Q1" << endl;
    }
    if ( (y > 0) && (x < 0))
    {
        cout << "Q2" << endl;
    }
    if ( (y < 0) && (x < 0))
    {
        cout << "Q3" << endl;
    }
}
