#include <iostream>
using namespace std;

int main() {
int X, Y, X2, Y2;
    cin >> X >> Y >> X2 >> Y2;
     if (X!=X2 && Y!=Y2 && (X-X2==Y-Y2 ||X-X2+Y-Y2==0  )){
      cout << "YES";
    } else{
      cout << "NO";
    }
    
    
  return 0;
}

//
