#include <iostream>
#include <iomanip> //setprecision
#include <cmath> //sqrt
using namespace std;

int main()
{
    double n = 0;
    long X = -1, X_cube = 0,Y = 0; 
    double d; 
    
    while(cin >> X){
    if(X == 0){break;}
    X_cube += X*X; // x1^2+x2^2+x3^2+x4^4+xn^2...
    Y += X; //x1+x2+x3+xn...
    n++;
    }
   d =  sqrt((X_cube - Y*Y/n)/(n-1)) ;


    cout << setprecision(11) << fixed;
    cout << d;
    

    return 0;
}