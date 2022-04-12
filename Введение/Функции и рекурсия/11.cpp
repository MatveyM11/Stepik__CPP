#include <iostream>

using namespace std;

int sum()
{
    int n;
    cin >> n;
    if (n != 0)
    {
        return n + sum();
    }
    return 0;
}

int main()
{

    cout << sum();

    return 0;
}
