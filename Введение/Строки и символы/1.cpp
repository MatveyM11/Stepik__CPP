#include <iostream>

using namespace std;


int main()
{
    char a;
    bool check = false;
    cin >> a;
    
    for(int i = 48; i < 58; i++){
        if(a == i){
            check = true;
        }
    }


    if(check == true){
        cout << "yes";
    }
    else{
        cout << "no";
    }

    return 0;
}
