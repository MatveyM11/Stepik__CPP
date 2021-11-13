#include <iostream>

using namespace std;

int main()
{
int N;
int X = 1;

cin >> N;

    while(X <= N){
        
        if( X == N){
            cout << "YES";
            break;
        }
        
        X = X * 2;
        
        if(X > N){
            cout << "NO";
            break;
        }
        
    }



    return 0;
}
    
