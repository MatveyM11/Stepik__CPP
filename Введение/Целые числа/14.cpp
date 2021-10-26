#include <iostream>

using namespace std;

int main() {
    int h, a, b;
    int x;
    cin >> h >> a >> b;
    x = (h - b - 1) / (a - b) + 1;
    cout << x;
    return 0;
}
