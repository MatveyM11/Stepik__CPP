#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<vector<int>> nm(n, vector<int>(m));
    vector<vector<int>> nm_transposed(m, vector<int>(n));

    // reading matrix
    for (int i = 0; i < n; i++)
    { // rows
        for (int j = 0; j < m; j++)
        { // columns
            cin >> nm[i][j];
        }
    }

    // transposing matrix nm
    for (int i = 0; i < n; i++)
    { // rows

        for (int j = 0; j < m; j++)
        { // columns

            nm_transposed[j][n-1-i] = nm[i][j];
        }
        cout << endl;
    }

    // drawing matrix
    for (int i = 0; i < m; i++)
    { // rows

        for (int j = 0; j < n; j++)
        { // columns

            cout << nm_transposed[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}