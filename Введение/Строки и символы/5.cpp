#include <iostream>

using namespace std;

int main()
{
//find palindrome string    
    string str;
    cin >> str;
    int n = str.length();
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        if (str[i] != str[j])
        {
            cout << "no" << endl;
            return 0;
        }
        i++;
        j--;
    }
    cout << "yes" << endl;

    return 0;
}
