#include<iostream>
#include<string>
using std::string;
using std::getline;
using namespace std;
int main()
{

    int c,lixo;
    string Thor;

    cin >> c;

    while(c--)
    {
        cin >> Thor;
        cin >> lixo;

        if( Thor == "Thor"){
            cout << "Y" << endl;
        }
        else
        cout << "N" << endl;
    }





}
