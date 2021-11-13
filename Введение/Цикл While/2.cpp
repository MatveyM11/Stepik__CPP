#include <iostream>

using namespace std;

int main()
{
int X;
int Y = 1;
int i = 1; //counter

cin >> X;

    while(Y != 0){
        i++;
        Y =+ X%i;
       
    }
    cout << i;

    return 0;
}
