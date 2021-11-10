#include <iostream>
using namespace std;

int main() {
int N2, M, X, Y;
int N = 0;//for sorting
int Z, A;
while(1){
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
    
    cout << Z << "_" << A << "_" << X << "_" << Y << endl;
    
    if( Z==0 or X==0 or Y==0 or A==0){
        cout << 0;
    }
    else if(Z==1 or X==1 or Y==1 or A==1){
        cout << 1;
    }
    else if((X<=Y)<=M or N){
        cout << X;
    }
   else if((Y<=X)<=M or N){
        cout << Y;
    }
    
    cout << endl;
  

   


}
  return 0;
}
