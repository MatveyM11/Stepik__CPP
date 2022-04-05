#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int x = 0, i = 0, i2 = 0, i3 = 0;
    cin >> x;
    vector<int> y(x);

    while (i < x)
    {
        cin >> y[i];
        i++;
    }
    i = 0;
    for (i = 0; i < x+1; i++)
    {

        if (i3 == 1)
        {
            cout << y[i - 1] << " ";
        }
        i3 = 0;

        for (i2 = 0; i2 < x; i2++)
        {
            if (y[i] == y[i2])
            {
                i3++;
            }
        }
    }

    return 0;
}