#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<vector<int>> nm(n, vector<int>(m, 0));

    for (int i = 0; i < n; i++)
    { // rows

        for (int j = 0; j < m; j++)
        { // columns
            if (i == 0)
            {
                 cout.width(4);
                cout << j + 1;
            }
            else if (i % 2 != 0)
            {
                cout.width(4);
                cout << (m * (i + 1)) - j;
            }
            else if (i % 2 == 0)
            {
                 cout.width(4);
                cout << m * i + j + 1;
            }
        }
        cout << endl;
    }

    return 0;
}