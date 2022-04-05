#include <iostream>
#include <vector>

using namespace std;

int
main ()
{
   int x = 0, i = 0, i2 = 0, i3 = 0;
  cin >> x;
  vector<int> y(x);

  while (i < x)
    {
      cin >> y[i];
      i++;
    }
  i = 0;
  for(int i = 0; i < x; i++){
      
      for(int i2 = 0; i2 < x; i2++){ 
          if(y[i] == y[i2] and i != i2){
            i3++;
          }
      }
  }
  
      
  cout << i3/2;    
          

  
    return 0;
}