#include <iostream>

using namespace std;

int main(void)
{
    int x, y, n, temp, soma = 0;

    cin >> x;
    cin >> y;

    if(x < y) //x sempre devera ser maior que y
    {
        temp = x;
        x = y;
        y = temp;
    }
    y++; // "between"
    while(x > y)
    {
        if((y % 2) != 0)
        {
            soma = y + soma;
        }
        y++;
    }
    cout << soma << endl;
    return 0;
}
