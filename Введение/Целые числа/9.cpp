#include <iostream>
using namespace std;

int main() {
int A; //rubles
int B; //cents
int N; //n of patties
int R; //pay n in rubles
int C; //pay rest in cents


    cin >> A >> B >> N;

    R = ((A*100+B)*N)/100;
    C = ((A*100+B)*N)%100;
    cout << R <<" " << C;

    return 0;
}
