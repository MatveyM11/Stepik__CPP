#include <iostream>
#include <cstring>
#include <sstream>
 
using namespace std;
int main()
{
char str[256];
cin.getline(str, 256);
int l=strlen(str),i,n=0;
istringstream ist(str);
char temp[256];
while(ist>>temp)
   n++;
cout<<n<<endl;
}
