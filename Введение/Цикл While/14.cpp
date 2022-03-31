#include <iostream>
using namespace std;

int main()
{

    int N1, N2, N3, i = 0, length = 0, length_l = 0;

    cin >> N2 >> N3;

    while (N3 != 0)
    {
        N1 = N2;
        N2 = N3;
        cin >> N3;
        if (i >= 1)
        {
            length++;
        }

        if (N2 > N1 and N2 > N3 and N3 != 0)
        {
            i++;
            if (i == 2)
            {
                length_l = length;
            }
            else if (i > 2 and length < length_l)
            {
                length_l = length;
            }
            length = 0;
        }
    }

    cout << length_l << "/" << i;
    return 0;
}
