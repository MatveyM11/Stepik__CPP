#include <iostream>
#include <iomanip> //setprecision
using namespace std;

int main()
{
    int X = -1, i = 0; //input
    double  Y; //storage
    
    while(cin >> X){
    if(X == 0){break;}
    Y += X;
    i++;
    }
    Y = Y/i;
    cout << setprecision(11) << fixed;
    cout << Y;
    

    return 0;
}