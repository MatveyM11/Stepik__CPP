#include <iostream>
using namespace std;

int main() {

int X, Y, X2, Y2;
while (X!=-1){
    cin >> X >> Y >> X2 >> Y2;
   if ((X2==X-1 && Y2==Y-2 || Y2==Y+2)
    ||(X2==X+1 && Y2==Y-2 || Y2==Y+2)
    ||(X2==X-2 && Y2==Y-1 || Y2==Y+1)
    ||(X2==X+2 && Y2==Y-1 || Y2==Y+1)) {
      cout << "YES";
    } else{
      cout << "NO";
    }
    
}   
  return 0;
}
