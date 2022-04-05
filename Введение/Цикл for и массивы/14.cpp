#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int X1, Y1, X2, Y2, i = 0, i2 = 0, i3 = 0;
    //vector<int> xy{1,8,2,7,3,6,4,5,5,4,6,3,7,2,8,1}; //debug
    vector<int> xy(16);

    while (i != 16)
    {
        cin >> xy[i];
        i++;
    }
    

    i = 0;

    for (i; i < 16; i += 2)
    {
        i2 = 0;
        for (i2; i2 < 16; i2 += 2)
        {
            X1 = xy[i];
            Y1 = xy[i + 1];
            X2 = xy[i2];
            Y2 = xy[i2 + 1];
           
            if (X1==X2 || Y1==Y2 ||(X1!=X2 && Y1!=Y2 && (X1-X2==Y1-Y2 ||X1-X2+Y1-Y2==0  )))
            {
                i3++;
            }
        }
    }

    if (i3 > 8)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}