#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, m, k, seats = 0, seat_index = -1, temp = 0;
    cin >> n >> m;

    vector<vector<int>> nm(n, vector<int>(m, 0));

    // reading matrix
    for (int i = 0; i < n; i++)
    { // rows
        for (int j = 0; j < m; j++)
        { // columns
            cin >> nm[i][j];
        }
    }
    cin >> k;
    for (int i = 0; i < n; i++)
    { // rows
        temp = 0;
        for (int j = 0; j < m; j++)
        { // columns
            if (nm[i][j] == 0)
            {
               temp++;
               if(temp > seats and temp == k){seats = temp; seat_index = i;}
            }
            else{temp = 0;}
        }
    }
    cout << seat_index+1;
    

    return 0;
}