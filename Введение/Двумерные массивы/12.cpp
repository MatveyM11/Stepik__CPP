#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, m, counter = 0;
    cin >> n >> m;

    vector<vector<int>> nm(n, vector<int>(m, 0));

    for (int i = 0; i < n; i++)
    { // rows

        for (int j = 0; j < m; j++)
        { // columns
            if ((i + 1) % 2 != 0)
            {
                if ((j + 1) % 2 != 0)
                {
                    counter++;
                    cout.width(4);
                    cout << counter;
                }
                else
                {
                    cout.width(4);
                    cout << 0;
                }
            }
            else if ((i + 1) % 2 == 0)
            {
                if ((j + 1) % 2 != 0)
                {
                    cout.width(4);
                    cout << 0;
                }
                else
                {
                    counter++;
                    cout.width(4);
                    cout << counter;
                }
            }
        }
        cout << endl;
    }

    return 0;
}