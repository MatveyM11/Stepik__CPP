#include <iostream>
using namespace std;

int main() {
int S, S2; //sec
int M, M2; //min
int H, H2; //hours 
int K; //total

   cin >> H >> M >> S >> H2 >> M2 >> S2;

   K = (H2*3600+M2*60+S2)-(H*3600+M*60+S);

    cout << K;
    
    return 0;
}
