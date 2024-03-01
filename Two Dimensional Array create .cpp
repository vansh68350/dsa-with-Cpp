#include<iostream>
using namespace std;
int
main ()
{
  int arr[5][5] =
	{ {12, 13, 14, 15, 16}, {17, 18, 19, 20, 11}, {21, 22, 23, 24, 25}, {45,
																		 96,
																		 37,
																		 95,
																		 56},
	{57, 69, 93, 84, 99} };
  int i, j;
  cout << "Two-dimensional array are: \n [\n";
  for (i = 0; i < 5; i++)

	{
	  for (j = 0; j < 5; j++)
		{
		  cout << arr[i][j] << " ";
		}
	  cout << endl;
	}
  cout << "]";
  return 0;
}

