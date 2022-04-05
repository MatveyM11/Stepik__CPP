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
        if (y[counter] > y[counter - 1])
        {
            cout << y[counter] << " ";
        }
    }

    return 0;
}