#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int i,casos,cobaias;
    int totalCOBC=0,totalCOBR=0,totalCOBS=0;
    double percentC=0,percentR=0,percentS=0,totalCOB=0;
    char bixo;

    cin >> casos;

    for(i=0; i<casos; i++)
    {
        cin >> cobaias >> bixo;
        totalCOB += cobaias;
        if(bixo=='C')
        {
            totalCOBC += cobaias;
        }
        else if(bixo=='R')
        {
            totalCOBR += cobaias;
        }
        else if(bixo=='S')
        {
            totalCOBS += cobaias;
        }
    }

percentC = totalCOBC*100/totalCOB;
percentR = totalCOBR*100/totalCOB;
percentS = totalCOBS*100/totalCOB;

cout << "Total:"<<totalCOB<< " cobaias" << endl;
cout << "Total de coelhos: " << totalCOBC << endl;
cout << "Total de ratos: " << totalCOBR << endl;
cout << "Total de sapos: " << totalCOBS << endl;
cout << fixed << setprecision(2);
cout << "Percentual de coelhos: " << percentC << " %" << endl;
cout << "Percentual de ratos: " << percentR << " %" << endl;
cout << "Percentual de sapos: " << percentS << " %" << endl;

return 0;

}
