#include <iostream>
#include <iomanip>

using namespace std;

int main(){
 float n, sp,m;
 int np = 0.0;

 for (int i=0; i < 6; i++){
  cin >> n;

  if(n > 0){
    sp = n;
    np++;
  }

 }

    m = (sp/np);
 cout << np <<" valores positivos" << endl;


 cout << fixed << setprecision(1);
 cout << m << endl;
}



