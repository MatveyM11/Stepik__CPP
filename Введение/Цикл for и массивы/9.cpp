#include <iostream>

using namespace std;

int
main ()
{
  int x = 0, counter = 0, i = 0, temp = 0;
  cin >> x;
  int y[x];

  while (counter < x)
    {
      cin >> y[counter];
      counter++;
    }
  temp = y[x-1];
  counter = 0;

  for (counter; counter < x; counter+=2)
    {
      if (x % 2 != 0 and counter < x-1)
	{
	  cout << y[counter+1] << " ";
	  cout << y[counter] << " ";
	}
    else if (x % 2 == 0 and counter < x)
	{
	  cout << y[counter+1] << " ";
	  cout << y[counter] << " ";
	}

    }
    if(x%2 != 0){cout << temp;}



  return 0;
}