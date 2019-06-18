#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    cout << fixed << setprecision(1);
    double prob, n1, n2, hp1, hp2, damage, atack;;
    cin >> hp1 >> hp2 >> atack >> damage;
    while(hp1 != 0 or hp2!= 0 or atack != 0 or damage!= 0) {
        n1 = 1.0 * hp1/damage;
        n2 = 1.0 * hp2/damage;
        n1 = ceil(n1);
        n2 = ceil(n2);
        if(atack==3){
        prob =  n1/(n1+n2);
        }else
        prob = (1 - pow(((6 - atack) / atack),n1)) / (1 - pow(((6 - atack) / atack),(n1+n2)));
        cout << prob * 100 << endl;
        cin >> hp1 >> hp2 >> atack >> damage;
    }
    return 0;
}

