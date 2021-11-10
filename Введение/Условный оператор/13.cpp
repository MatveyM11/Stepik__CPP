#include <iostream>
using namespace std;

int main() {
int X, Y, Z;
int swap;

cin >> X >> Y >> Z;
   
   if(X > Y) {swap = X; X = Y; Y = swap;}
   if(X > Z) {swap = X; X = Z; Z = swap;}
   if(Y > Z) {swap = Y; Y = Z; Z = swap;}
    

cout << X << " " << Y << " " << Z << endl;



  return 0;
}
