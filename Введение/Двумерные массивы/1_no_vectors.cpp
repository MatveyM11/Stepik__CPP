#include <iostream>

using namespace std;

int main()
{
    int n, m, largest;
    bool stop = true;
    int nm[100][100];

    cin >> n >> m;

    // reading matrix
    for (int i = 0; i < n; i++)
    { // rows
        for (int j = 0; j < m; j++)
        { // columns
            cin >> nm[i][j];
        }
    }
    largest = nm[0][0];
    for (int i = 0; i < n; i++)
    { // rows
        for (int j = 0; j < m; j++)
        { // columns
            if (nm[i][j] >= largest)
            {
                largest = nm[i][j];
            }
        }
    }

    for (int i = 0; i < n; i++)
    { // rows
        for (int j = 0; j < m; j++)
        { // columns
            if (stop == false)
            {
                break;
            }
            if (nm[i][j] == largest)
            {
                cout << i << " " << j; // prints index of the first appearance of the largest number
                stop = false;
                break;
            }
        }
    }

    // cout << largest; //debug

    return 0;
}