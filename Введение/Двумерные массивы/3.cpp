#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, m, diagonal = 0, d1;
    cin >> n;
    // n = 5;
    m = n;
    d1 = n / 2;
    vector<vector<int>> nm(n, vector<int>(m, -1));

    // drawing matrix nm
    for (int i = 0; i < n; i++)
    { // rows

        diagonal++;
        for (int j = 0; j < m; j++)
        { // columns
            if (i == j)
            {
                cout << "0"
                     << " ";
            }
            else if (j > i)
            {
                cout << j - i << " ";
            }
            else if (j < i)
            {
                cout << i - j << " ";
            }
            /*else
            {
                cout << "+"
                     << " ";
            } */
            // debug
        }
        cout << endl;
    }

    return 0;
}