#include <iostream>
using namespace std;

int main() {
int V, T; //velocity, time
int L; //road length

    cin >> V >> T;
    
    L = (109-(V*T%109)*-1)%109;
    
    cout << L;
    
    return 0;
}
