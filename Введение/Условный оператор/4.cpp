#include <iostream>
using namespace std;

int main() {
int X, Y, Z;
    cin >> X >> Y >> Z;
   if (X+Y>Z && Z+Y>X && Z+X>Y) {
      cout << "YES";
    } else {
      cout << "NO";
    }
    
    
  return 0;
}
