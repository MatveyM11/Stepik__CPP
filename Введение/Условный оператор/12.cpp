#include <iostream>
using namespace std;

int main() {
int N2, M, X, Y;
int N = 0;//for sorting
int Z, A, B, C;
while(1){
    cin >> N2 >> M >> X >> Y;
    if(N2<M){ //sorting N is a long side
        N=+M;
        M=+N2;
    }
    else{
        N=+N2;
    }
    
   if(N-Y <= M-X and X and Y){
       Z=+ N-Y;
   }
   if(M-X <= Z){
       A=+M-X;
       
   }
   if(X <=Z){
       B=+X;
       
   }
   if(Y <=Z){
       C=+Y;
    
   }
   
   if((Z <= A and B and C) and Z >=0){
       cout << Z;
   }
   if((A <= Z and B and C) and A >=0){
       cout << A;
   }
   if((B <= Z and A and C) and B >=0){
       cout << B;
   }
   if((C <= A and B and Z ) and C >=0){
       cout << C;
   }

   


}
  return 0;
}
