include <iostream>

using namespace std;

int main()
{
int N, K;
int Y = 1;
int i = 1; //counter

cin >> N;

    while(Y <= N){
        
        Y =+ Y*i;
        if(Y <= N){
            cout << Y << " ";
            if(i != 2){
                i++;
            }
        }
        
       
    }


    return 0;
}
