#include <iostream>
using namespace std;
int main() {
int X, Y, Z;
int X2, Y2, Z2;
int swap;

cin >> X >> Y >> Z;
cin >> X2 >> Y2 >> Z2;
     
     //first sorting
     if(X > Y) {swap = X; X = Y; Y = swap;}
     if(X > Z) {swap = X; X = Z; Z = swap;}
     if(Y > Z) {swap = Y; Y = Z; Z = swap;}
     
     //second sorting
     if(X2 > Y2) {swap = X2; X2 = Y2; Y2 = swap;}
     if(X2 > Z2) {swap = X2; X2 = Z2; Z2 = swap;}
     if(Y2 > Z2) {swap = Y2; Y2 = Z2; Z2 = swap;}
     
    
    //comparing
    
     if ((X == X2 and Y == Y2 and Z == Z2)){
         cout << "Boxes are equal";
     }
     else if (X <= X2 && Y <= Y2 && Z <= Z2){
         cout << "The first box is smaller than the second one";
     }
     else if (X >= X2 && Y >= Y2 && Z >= Z2){
         cout << "The first box is larger than the second one";
     }
     else{
         cout << "Boxes are incomparable";
     }

  
  return 0;
}
