#include <iostream>
using namespace std;

int main() {
int X,Y,Y2; 
int A,B,C,D;


    cin >> X;

    A = X%10;
    B = ((X%100)/10);
    C = ((X%1000)/100);
    D = ((X%10000)/1000);
    
    Y = (D-A)*(D-A)+(C-B)*(C-B);
    
    cout << Y+1;
    
    return 0;
}
