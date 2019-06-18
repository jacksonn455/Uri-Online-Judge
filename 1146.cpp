#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int i=0;
    double s=0,v=0;

for(i=1;i<=100;i++){
    s = i+(1/i+1);

}
cout << fixed <<setprecision(2);
cout << s <<endl;
}
