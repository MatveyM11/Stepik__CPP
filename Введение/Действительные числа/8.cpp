#include <iostream>
#include <cmath>
#include <iomanip>
 
using namespace std;
 
int main() {

  int n = 0;
  double x = 0, a = 0, s = 0;
  cin >> n >> x;
  cin >> a;
  do {
      s *= x;  
      s += a;
      cin >> a;
  } while (n--);
  cout << s;
  return 0;
}