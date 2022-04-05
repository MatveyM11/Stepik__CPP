#include <iostream>

using namespace std;

int main()
{
    int x = 0, counter = 0, counter2 = 0;
    cin >> x;
    int y[x];

    while (counter < x)
    {
        cin >> y[counter];
        counter++;
    }
    counter = 1;
    for (counter; counter < x; counter++)
    {
        if (y[counter] > 0 and y[counter - 1] > 0)
        {
            cout << y[counter-1] << " " << y[counter];
            break;
        }
        else if (y[counter] < 0 and y[counter - 1] < 0)
        {
            cout << y[counter] << " " << y[counter-1];
            break;
        }
    }

    return 0;
}