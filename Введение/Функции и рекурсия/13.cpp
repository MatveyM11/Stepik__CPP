#include <iostream>

using namespace std;

int main()
{
    int x = 1;
    int y = 0;
    int n;
    cin >> n;
    for (int i = 2; i > 0; i++)
    {
         y++;
          if(i == n){
            cout << x;
            break;
        }
        else if (y == x)
        {   
           x++;
           y = 0;
            //cout << "i - " << i << "|";
            //cout << x-1 << endl;
            continue;
        }
     
    }

    return 0;
}
