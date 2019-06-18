#include<iostream>

using namespace std;

int main()
{
    int casos, casosdisplay = 1;
    string a, b;



    cin >>casos;

    while(casos--)
    {

        cin >> a >> b;

        if(a==b)
        {
            cout<<"Caso #" <<casosdisplay <<": De novo!"<<endl;
        }
        else
        {
            if(((a=="tesoura") and (b=="papel")) or ((a=="papel") and (b=="pedra"))or
                    ((a=="pedra") and (b=="lagarto")) or ((a=="lagarto" and b=="Spock")) or
                    ((a=="Spock" and b=="tesoura")) or ((a=="tesoura" and b=="lagarto")) or
                    ((a=="lagarto") and (b=="papel")) or ((a=="papel" and b=="Spock"))or
                    ((a=="Spock") and (b=="pedra")) or ((a=="pedra" and b=="tesoura")))
            {
                cout<<"Caso #" <<casosdisplay <<": Bazinga!"<<endl;
            }
            else
                cout<<"Caso #" <<casosdisplay <<": Raj trapaceou"<<endl;
        }
        casosdisplay++;
    }
}
