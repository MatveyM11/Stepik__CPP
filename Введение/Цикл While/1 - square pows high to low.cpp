#include <iostream>
using namespace std;
int main(){
 int N;
 int sqr = 1;
 cin >> N;
    int i =+ N; //counter
 
    while(i <= N and i != -1){
            i--;    
            sqr=+ i*i;
            if(i <= N and sqr <= N and i != -1){
                cout << sqr << " ";
            }
            
        
    }
}
