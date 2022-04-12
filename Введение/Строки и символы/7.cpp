#include <iostream>
#include <regex>
using namespace std; 
int main()
{
    std::string str;
    std::getline(std::cin, str);
    std::regex reg("^((25[0-5]|2[0-4][0-9]|[1][0-9][0-9]|[0-9]{1,2})\\.){3}(25[0-5]|2[0-4][0-9]|[1][0-9][0-9]|[0-9]{1,2})$");
    if (regex_match(str, reg))
    cout << "YES";
    else cout << "NO";
    
  return 0;
}
