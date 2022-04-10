#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main()
{
    int n, m, z = 0, s = 0, inx = 0, x = -1, y = 0; // s - line size modificator
    cin >> n >> m;
    int n2, m2;
    n2 = n;
    m2 = m;

    vector<vector<int>> nm(n, vector<int>(m, -1));

    while (z != n*m)
    {

        if (inx == 0) //right
        {
            inx = 90;
            s++;
            x++;
            for (int i = 0; i < m-(s-1); i++)
            {
                z++;
                nm[y][x] = z;
                x++;
                 if(z == n*m){
                    break;
                }
            }
        }
        else if (inx == 90) // down
        {
            inx = 180;
            n2 = n - s;
            s++;
            for (int i = 0; i < n2; i++)
            {
                z++;
                y++;
                nm[y][x - 1] = z;
                 if(z == n*m){
                    break;
                }
            }
        }
        else if (inx == 180) //left
        {
            inx = 270;
            x--;

            for (x; x != y-n2; x--)
            {
                z++;
                nm[y][x - 1] = z;
                if(z == n*m){
                    break;
                }
            }
        }
        else if(inx = 270){ // up
             inx = 0;
             y--;
           for(int i = y;i != x;i--){ 
               y = i;
               z++;
               nm[y][x] = z;
                if(z == n*m){
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

            cout << setw(4) <<nm[i][j];
        }
        cout << endl;
    }

    return 0;
}
