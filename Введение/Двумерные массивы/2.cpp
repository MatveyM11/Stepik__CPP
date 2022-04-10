#include <iostream>
#include <vector>

using namespace std;

int
main ()
{
  int n, m, diagonal = 0, d1;
  cin >> n;
  //n = 5;
  m = n;
  d1 = n / 2;
  vector < vector < int >>nm (n, vector < int >(m, 0));

  // drwaing matrix nm
  for (int i = 0; i < n; i++)
    {				// rows
      diagonal++;
      for (int j = 0; j < m; j++)
	{			// columns
	  if (i == j)
	    {
	      cout << "*" << " ";
	    }			// diagonal left
	  else if (i == d1 or j == d1)
	    {			// middle
	      cout << "*" << " ";
	    }
	  else if (j == ((n-1) - i))
	    {
	      cout << "*" << " ";
	    }
	  else if (nm[i][j] == 0)
	    {
	      cout << "." << " ";
	    }
	 

	}
      cout << endl;
    }

  return 0;
}
