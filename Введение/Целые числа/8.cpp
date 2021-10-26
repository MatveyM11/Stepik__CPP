#include <iostream>
using namespace std;

int main() {
int X;
int Y;
int Z;
int K;


    cin >> X >> Y >> Z;

    K = ((X/2)+X%2)+((Y/2)+Y%2)+((Z/2)+Z%2);
    cout << K;

    return 0;
}
