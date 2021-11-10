#include <iostream>
using namespace std;
int main() {
  int a, b, c, mn, mid, mx;
  cin >> a >> b >> c;
  mn = a - (a - b) * (b < a);  
  mn = mn - (mn - c) * (c < mn);    
  mx = a - (a - b) * (b > a);  
  mx = mx - (mx - c) * (c > mx);   
  mid = a + b + c - mx - mn;
  cout << mn << " " << mid << " " << mx;    
  return 0;
}
