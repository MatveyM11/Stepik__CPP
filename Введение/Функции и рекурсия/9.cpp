#include <iostream>
#include <cmath>
using namespace std;

long long minDivisor(long long x1){

if(x1%2 == 0){
  x1 = 2;
}
else{
  int i = 2;
  while(x1%i != 0 and i < sqrt(x1)){
    i++;
  }
  if(i > sqrt(x1)){
  x1 = x1;
  }
  else{ x1 = i;}
}

return x1;
}

int main() {
  long long x;
  cin >> x;
  
  if( minDivisor(x) == x){
  cout << "YES";
  }
 else{cout << "NO";}   
    
    
  return 0;
}
