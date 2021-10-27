#include <iostream>
using namespace std;

int main() {
int X, Y, Z;
    cin >> X >> Y >> Z;
   if ((X+Y+Z)-X*2==X) {
      cout << "3";
    } else if ((X+Y+Z)-X*2!=X && (X+Y)-X==X || (Z+Y)-Z==Z || (Z+X)-Z==Z){
      cout << "2";
    } else{
      cout << "0";
    }
    
    
  return 0;
}
