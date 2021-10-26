#include <iostream>
using namespace std;

int main() {
int X;
int Y;
    cin >> X;

Y = X%10+X/100+((X%100-(X%10))/10);
    cout << Y;

    return 0;
}
