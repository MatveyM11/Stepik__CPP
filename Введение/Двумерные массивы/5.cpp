#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, m, diagonal = 0;
    bool diag_unpaired = false;
    cin >> n;
    // n = 5;
    m = n;
  
    vector<vector<int>> nm(n, vector<int>(m, -1));
    
     // reading matrix
    for (int i = 0; i < n; i++)
    { // rows
        for (int j = 0; j < m; j++)
        { // columns
            cin >> nm[i][j];
        }
    }
 
 
    // drawing matrix nm
    for (int i = 0; i < n; i++)
    { // ro0,ws
        if(diag_unpaired == true){
        cout << "NO";
          break;
      }
        
        for (int j = 0; j < m; j++)
        { // columns
            if(nm[i][j] != nm[j][i]){
              diag_unpaired = true;
              
              break;
            }
            
        }
    }
    if(diag_unpaired == false){cout << "YES";}

    return 0;
}