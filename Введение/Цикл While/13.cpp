#include <iostream>
using namespace std;

int main() {

int N1, N2, N3, i = 0;

cin >> N2 >> N3;

while(N3 != 0){
N1 = N2;
N2 = N3;
cin >> N3;
if(N2 > N1 and N2 > N3 and N3 != 0){i++;}

}
cout << i;
return 0;

}
