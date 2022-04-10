#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, m, counter = 0;
    cin >> n >> m;

    vector<vector<int>> nm(n, vector<int>(m, -1));

    for (int k = 0; k < (n + m - 1); k++)
    {

        for (int i = 0; i < n; i++)
        { // rows

            for (int j = 0; j < m; j++)
            { // columns
                if (j == k - i)
                {
                    counter++;
                    nm[i][j] = counter;
                    break;
                }
            }
        }
    }

    // drawing matrix
    for (int i = 0; i < n; i++)
    { // rows

        for (int j = 0; j < m; j++)
        { // columns
            cout.width(4);
            cout << nm[i][j];
        }
        cout << endl;
    }

    return 0;
}
