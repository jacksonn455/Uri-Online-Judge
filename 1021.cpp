#include<iostream>
#include<iomanip>

using namespace std;
int main()
{
    int  n100, n50, n20, n10, n5, n2, n1;
    float reais, m100, m50, m25, m10, m5, m1;

    cin >> reais;


    n100 = reais/100;
    reais = reais%100;

    n50 = reais/50;
    reais = reais%50;

    n20 = reais/20;
    reais = reais%20;

    n10 = reais/10;
    reais = reais%10;

    n5 = reais/5;
    reais = reais%5;

    n2 = reais/2;
    reais = reais%2;

    n1 = reais/1;
    reais = reais%1;

    m100 = reais/1;
    reais = reais%1;

    m50 = reais/0.50;
    reais = reais%0.50;

    m25 = reais/0.25;
    reais = reais%0.25;

    m10 = reais/0.10;
    reais = reais%0.10;

    m5 = reais/0.05;
    reais = reais%0.05;

     m1 = reais/0.01;
    reais = reais%0.01;

    cout << fixed << setprecision(2);
    cout <<" NOTAS "<<endl;
    cout << n100 << " nota(s) de R$ 100,00" << endl;
    cout << n50 << " nota(s) de R$ 50,00" << endl;
    cout << n20 << " nota(s) de R$ 20,00" << endl;
    cout << n10 << " nota(s) de R$ 10,00" << endl;
    cout << n5 << " nota(s) de R$ 5,00" << endl;
    cout << n2 << " nota(s) de R$ 2,00" << endl;
    cout << n1 << " nota(s) de R$ 1,00" << endl;
    cout << " MOEDAS " << endl;
    cout << m100 << " moeda(s) de R$ 1,00" << endl;
    cout << m50 << " moeda(s) de R$ 0,50" << endl;
    cout << m25 << " moeda(s) de R$ 00,25" << endl;
    cout << m10 << " moeda(s) de R$ 0,10" << endl;
    cout << m5 << " moeda(s) de R$ 0.05" << endl;
    cout << m1 << " moeda(s) de R$ 0,01" << endl;

}

