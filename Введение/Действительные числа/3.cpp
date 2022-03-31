#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a, b, c, S, P;
    cin >> a >> b >> c;
    P = (a+b+c)/2;
    S = sqrt(P*(P-a)*(P-b)*(P-c));
    cout << S;

    return 0;
}
