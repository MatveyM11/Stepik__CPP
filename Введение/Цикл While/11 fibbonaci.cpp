#include <iostream>

using namespace std;

int main()
{
int n = 1;
int fib1 = 1;
int fib2 = 0;
int fib_sum;
int a;
int i = 0;

cin >> a;
        

        
while(n > 0 and i != 46){
    fib_sum = fib1 + fib2;
    fib1 = fib2;
    fib2 = fib_sum;
    i++;
    n++;
    if(a == fib_sum){
        cout << i;
        break;
    }
    else if(i == 46){
        cout << -1;
  
        break;
    }
    
}
   
           
    return 0;
}
