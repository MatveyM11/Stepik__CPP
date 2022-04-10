#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, m, k, largest, temp;

    cin >> n;
     m = n;
    vector<vector<int>> nm(n, vector<int>(m));

   

    // reading matrix
    for (int i = 0; i < n; i++)
    { // rows
        for (int j = 0; j < m; j++)
        { // columns
            cin >> nm[i][j];
        }
    }

    cin >> k;
    k = k*(-1);

    for (int i = 0; i < n; i++)
    { // rows
        for (int j = 0; j < m; j++)
        { // columns

            if (j+k == i+k and j < m and j < m - k and j+k >= 0)
            {
                cout << nm[i][j+k] << " ";
            }
        }
    }

    return 0;
}