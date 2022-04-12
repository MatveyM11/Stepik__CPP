#include <iostream>

using namespace std;

int min(int a, int b){
    if(a > b){a = b;}

    return a;
}

int min4(int a, int b, int c, int d){
    a = min(min(a,b), min(c,d));
    return a;
}

int main()
{
    int c, d, e, f;
    cin >> c >> d >> e >> f;
    cout << min4(c,d,e,f);

    return 0;
}
