#include <iostream>
#include <cmath>

using namespace std;

double distance(double x1, double y1, double x2, double y2){
    double d1;
    d1 = sqrt(pow(x2-x1, 2.0)+pow(y2-y1, 2.0));
    return d1;
}

int main()
{
    double x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    cout << distance(x1, y1, x2, y2);

    return 0;
}
