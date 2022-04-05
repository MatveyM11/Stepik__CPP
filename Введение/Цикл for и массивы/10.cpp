#include <iostream>

using namespace std;

int
main ()
{
  int x = 0, counter = 0, i = 0;
  cin >> x;
  int y[x];

  while (counter < x)
    {
      cin >> y[counter];
      counter++;
    }
  counter = 0;

  for (counter; counter < x; counter++)
    {
      if(i == 0){
        cout << y[x-1] << " ";
        i++;
      }
      if (i != 0 and counter < x-1)
	{
	  cout << y[counter] << " ";
	}

    }



  return 0;
}