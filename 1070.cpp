#include<iostream>

using namespace std;

int main() {

    int a=1 , x;

    cin >> x;

    while( a <= 6){

        if(x % 2 != 0){

            cout << x << endl;
            a++;
            x++;
        }

        x++;
    }

}
