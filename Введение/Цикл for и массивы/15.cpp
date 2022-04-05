#include <iostream>
#include <vector>

using namespace std;

int main(){
  int K = 0, i = 0, I = 0, j = 0, N = 0;
  cin >> N >> K;
 vector <int>Nv(N,1);
  while(i != K){
    cin >> I >> j;
    i++;
    for(I;I<j+1;I++){
      Nv[I-1] = 0;}
    }
    i = 0;
    for(i;i<N;i++){
      if(Nv[i]==0){cout << ".";}
      else{cout << "I";}
    }
    return 0;
  }

