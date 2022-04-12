#include <iostream>
#include <set>

using namespace std;

int main()
{
// if number didn't occured in a set before, cout YES, else cout NO
    int n;
    cin >> n;
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (s.find(x) == s.end())
        {
            cout << "NO" << endl;
            s.insert(x);
        }
        else
        {
            cout << "YES" << endl;
        }
    }


    return 0;
}
