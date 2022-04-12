#include <iostream>
#include <set>

using namespace std;

int main()
{
// find size of a set<int> with size of n
    set<int> s;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.insert(x);
    }
    cout << s.size() << endl;
    


    return 0;
}
