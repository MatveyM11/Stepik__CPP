#include <iostream>
#include <map>
#include <string>
 
using namespace std;
 
int main()
{
	map<string, string> s1, s2;
	map<string, string>::iterator j;
	int n;
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		string temp1, temp2;
		cin >> temp1 >> temp2;
		s1.insert(pair<string, string>(temp1, temp2));
		s2.insert(pair<string, string>(temp2, temp1));
	}
	string key;
	cin >> key;
	j = s1.find(key) != s1.end() ? s1.find(key) : s2.find(key);
	cout << j->second;
	return 0;
}
