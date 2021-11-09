#include <iostream>
using namespace std;

int main() {
int N, M, K;

    cin >> N >> M >> K;
    
    if((K%N==0 or K%M==0) and K<N*M){
    cout << "YES";
    }
    else{
    cout << "NO";
        
    }
   
    


