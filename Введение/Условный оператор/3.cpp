#include <iostream>
using namespace std;

int main() {
int X, Y, Z;
    cin >> X >> Y >> Z;
   if (X>=Y && X>=Z) {
      cout << X;
} else if (Y>=X && Y>=Z) {
      cout << Y;
} else {
      cout << Z;
}
    
    
  return 0;
}
