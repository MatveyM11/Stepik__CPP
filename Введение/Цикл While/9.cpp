#include <iostream>

using namespace std;

int main()
{
int N = 1;
int max1 = 0;//
int max2 = 0;
    while(N != 0){
     
     cin >> N;
      
     
     //searching for the biggest number
     if(max1 >= N){
         max1 =+ max1; 
         if(max2 <= N){max2 =+ N;}
         }
     else{
         max2 =+ max1;
         max1 =+ N;
     }
    
     }
     
     cout << max2;
           
    return 0;
}
