#include <iostream>

using namespace std;

double power(double a, double n){
    double b = a;
    double c;
    c = 1/a;
    
    if(n > 0){
    for(int i = 0; i < n-1;i++){
    a =+ a*b;
    }
    }
    else if(n <= -1){
    a = c;
    for(int i = 0; i > n+1;i--){
    a =+ a/b;
    }
    }
    else if(n == 0){
    a =+ 1;
    }
    return a;
}

int main() {
  double a, n;
  cin >> a >> n;
    
    cout << power(a, n);
  return 0;
}
