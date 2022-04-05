#include <iostream>

using namespace std;

int main()
{
    int x = 0, counter = 0, counter2 = 0;   
    cin >> x; 
    int y[x];

    while(counter < x){
        cin >> y[counter];
        counter++;
    } 
    counter = 0;
    for (counter;counter < x; counter++)
    {
        if(y[counter] > 0){
        counter2++;
        }
        
    }
    cout << counter2;

    return 0;
}