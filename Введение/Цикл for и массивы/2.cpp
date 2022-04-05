#include <iostream>

using namespace std;

int main()
{
    int x = 0, counter = 0;   
    cin >> x; 
    int y[x];

    while(counter < x){
        cin >> y[counter];
        counter++;
    } 
    counter = 0;
    for (counter;counter < x; counter++)
    {
        if(y[counter]%2 == 0){
        cout << y[counter] << " ";
        }
        
    }
    

    return 0;
}