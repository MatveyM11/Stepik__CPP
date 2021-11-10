#include <iostream>
using namespace std;

int main() {
int N2, M, X, Y,min, min1, min2;
int N = 0;//for sorting
int Z, A;

    cin >> N2 >> M >> X >> Y;
    if(N2<M){ //sorting N is a long side
        N=+M;
        M=+N2;
    }
    else{
        N=+N2;
    }
    
       Z=+ N-Y;
       A=+M-X;
    

    
      if(Z < A && Z < X && Z << Y){
        cout << Z;
    }
    else if (A < Z && A < X && A < Y){
        cout << A;
    }
    else if(X < A && X < Z && X < Y){
        cout << X;
    }
    else if(Y < Z && Y < A && Y < X){
        cout << Y;
    }
    else if(N == M and N==X and N==Y){
        cout << N;
    }
     else if(X==Y){
        cout << X;
    }
     else if(X== 0 or Y == 0 or N == 0 or Z == 0){
         cout << 0;
     }

   



  return 0;
}
