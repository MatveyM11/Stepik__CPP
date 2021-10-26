#include <iostream>
using namespace std;

int main() {
int S; //sec
int M, M2; //min
int H, H2; //hours 
int Sr; //rest of the seconds


    cin >> S;

    H = (S/3600)%24;
    H2 = (S/3600);
    M = S/60%60;
    Sr = S-(H2*3600)-M*60;
    M2 = M/60;
    cout << H <<":" << M/10<<M%10 << ":"<<Sr/10 << Sr%10;
    
    return 0;
}
