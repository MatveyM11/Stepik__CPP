#include <iostream>

using namespace std;

int main()
{
int n;
int fib1 = 1;
int fib2 = 1;
int fib_sum;
int i = 0;

cin >> n;

    if(n == 1 or 2){
        fib_sum =+ 1;
    }
        

n += -2;
        
while(i < n and n > 0){
    fib_sum = fib1 + fib2;
    fib1 = fib2;
    fib2 = fib_sum;
    i++;
    
}
    cout << fib_sum;
           
    return 0;
}
