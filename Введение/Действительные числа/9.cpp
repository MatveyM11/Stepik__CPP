#include <iostream>
#include <cmath>
#include <iomanip>
 
using namespace std;
 
int main() {

  double a, b, c, x1, x2;
  cin >> a >> b >> c;
  x1 = (-b+(sqrt(b*b-4*a*c)))/(2*a);
  x2 = (-b-(sqrt(b*b-4*a*c)))/(2*a);
  
  if(sqrt(b*b-4*a*c) >= 0 and x1 != x2 and x2 < x1){
      cout << setprecision(6) << fixed;
      cout << x2 << " "<<x1;
  }
  else if(sqrt(b*b-4*a*c) >= 0 and x1 != x2 and x2 > x1){
       cout << setprecision(6) << fixed;
      cout << x1 << " "<<x2;
  }
  else if(x1 == x2 and sqrt(b*b-4*a*c) >= 0){
      cout << setprecision(6) << fixed;
      cout << x1;
  }
    

      
 return 0;
}