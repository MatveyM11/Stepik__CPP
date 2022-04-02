#include <iostream>
using namespace std;

int main()
{
    int P,X,Y,K,annual = 0;   
    cin >> P >> X >> Y >> K;
    annual += ((X*100+Y)*P)/100 + (X*100+Y);
    while(K != 1){
        K--;
         annual += (annual*P)/100;
    }

    X = annual/100; Y = annual%100; 
    cout << X << " " << Y;

    return 0;
}