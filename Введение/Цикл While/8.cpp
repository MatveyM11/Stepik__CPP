#include <iostream>

using namespace std;

int main()
{
int N = 1;
int i = 0;//counter
int i2 =0;

    while(N != 0){
     
     cin >> N;
     
     if(N == i and N != 0){
        i2++;
    }
     
     if(i >= N){
         i =+ i; 
         
     }
     else{
         i =+ N;
         i2 =+ 1;
         
     }
    
     }
     
     cout << i2;
           
    return 0;
}
