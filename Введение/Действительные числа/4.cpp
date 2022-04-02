#include <iostream>
#include <iomanip> // for trunc
using namespace std;

int main()
{
    int P,X,Y, annual;   
    cin >> P >> X >> Y;
    annual = ((X*100+Y)*P)/100 + (X*100+Y);
    X = annual/100; Y = annual%100; 
    cout << X << " " << Y;

    return 0;
}