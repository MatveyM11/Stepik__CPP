#include <iostream>

using namespace std;

int
main ()
{
  int x = 0, counter = 0, lesser = 0, lesser2 = 0, i = 0;
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
      if (y[counter] % 2 != 0 and i == 0)
	{
	  lesser = y[counter];
	  i++;
	}
      else if (y[counter] % 2 != 0 and y[counter] < lesser)
	{
	  lesser = y[counter];

	}


    }
  cout << lesser;



  return 0;
}