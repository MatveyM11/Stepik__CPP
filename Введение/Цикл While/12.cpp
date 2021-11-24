#include <iostream>
using namespace std;
int main()
{
int N = 1;
int num1 = 0, num2 = 0;
int i1 = 0, i2 = 0, fin =0;//counters
int tmr = 1; //timer

    while(N != 0){
     
     cin >> N;
     if (N == 0){break;}
     
     if(tmr == 1){num1 =+ N; tmr--;}
    
     
     if(num1 == N){
         i1++;  
         cout << "if i1[" << i1 << "]" << endl;
     }
     else if(num1 != N){
          num2 =+ num1;
          num1 =+ N;
          i2 =+ i1;
          i1 =+ 1;
          cout << "else i2[" << i2<< "]" << endl;
          cout << "else i1[" << i1 << "]" << endl;
     }
     if(i1 >= fin){fin =+ i1;}
     else if(i2 >= fin){fin =+ i2;}
      cout << "fin[" << fin << "]" << endl;
     }
    
     
     cout << fin;
           
    return 0;
}
