#include<iostream>
using namespace std;
int main() {

    int GolG,GolI,loop=0,G=0,I=0,t=0,E=0;

    cin >> GolI;
    cin >> GolG;
    t++;
    if(GolG > GolI) {
        G++;
    }
    if(GolI > GolG) {
        I++;
    }
    if(GolG == GolI) {
        E++;
    }

    while(loop != 2) {
        cout << "Novo grenal (1-sim 2-nao)" << endl;
        cin >> loop;
        if(loop == 2)
            break;
        cin >> GolI;
        cin >> GolG;
        t++;
        if(GolG > GolI) {
            G++;
        }
        if(GolI > GolG) {
            I++;
        }
        if(GolG == GolI) {
            E++;
        }

    }
    cout << t <<" grenais"<<endl;
    cout <<"Inter:"<<I<<endl;
    cout <<"Gremio:"<<G<<endl;
    cout <<"Empates:"<<E<<endl;

    if(G > I) {
        cout << "Gremio venceu mais"<<endl;
    }
    if(I > G) {
        cout << "Inter venceu mais" <<endl;
    }






}
