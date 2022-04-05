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
    for (counter;counter <= x; counter+=2)
    {
        if(counter < x){
        cout << y[counter] << " ";
        }
        
    }
    

    return 0;
}