#include <iostream>
#include <cmath>

using namespace std;

double isPointInSquare(double x, double y){
    return fabs(x) + fabs(y) <= 1;
}

int main()
{
    double x,y;
    bool check;
    cin >> x >> y;
    check = isPointInSquare(x,y);
    if(check == true){
        cout << "YES";
    }
    else{
        cout << "NO";
    }

    return 0;
}
