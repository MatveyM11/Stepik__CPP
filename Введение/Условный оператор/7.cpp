#include <iostream>
using namespace std;

int main() {
int X, Y, X2, Y2;
    cin >> X >> Y >> X2 >> Y2;
   if ((X2==X+1 ||X2==X-1 || X2==X) && (Y2==Y+1 || Y2==Y-1 || Y2==Y)) {
      cout << "YES";
    } else{
      cout << "NO";
    }
    
    
  return 0;
}
