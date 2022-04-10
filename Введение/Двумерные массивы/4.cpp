#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, m,m3,m4,temp;

    cin >> n >> m;
    vector < vector<int> > nm (n, vector<int>(m) );

    // reading matrix
    for (int i = 0; i < n; i++)
    { // rows
        for (int j = 0; j < m; j++)
        { // columns
            cin >> nm[i][j];
        }
    }
    
    cin >> m3 >> m4;
    if(m4 < m3){
      temp = m3;
      m3 = m4;
      m4 = temp;
      temp = 0;
    }
    for (int i = 0; i < n; i++)
    { // rows
        for (int j = 0; j < m; j++)
        { // columns
        if(j == m3){
          temp = nm[i][j];
          nm[i][j] = nm[i][m4];
          nm[i][m4] = temp;
          
        }
            cout << nm[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}