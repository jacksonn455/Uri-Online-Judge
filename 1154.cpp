#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int id=0,i=0;
    double m=0,v=0,c=0;


    while(id>=0)
    {
        cin >> id;

        if(id>=0){
            v+=id;
            c++;
        }
    }
    m = v/c;
    cout << fixed << setprecision(2);
    cout << m <<endl;







}
