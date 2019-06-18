#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main()
{
  double x1,y1;
  double x2,y2;
  double Dis;

  cin >> x1;
  cin >> y1;
  cin >> x2;
  cin >> y2;

  Dis = sqrt(((x2 - x1) * (x2 - x1) )+( (y2 - y1) * (y2 - y1)));

  cout << fixed << setprecision(4);
  cout << Dis << endl;

}
