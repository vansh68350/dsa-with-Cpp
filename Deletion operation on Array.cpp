#include<iostream>
using namespace std;
int
arrayTraversal (int arrD[], int size)
{
  for (int i = 0; i < size; i++)
	{
	  cout << arrD[i] << " ";
	}
}

int
arrayDeletion (int arrD[], int size, int index)
{

  for (int i = index; i < size - 1; i--)
	{
	  {
		arrD[i] = arrD[i + 1];
	  }

	  return 1;
	}
}

int
main ()
{
  int arrD[100] = { 12, 78, 12, 96, 80, 42 };
  int size = 6;
  int index = 0;
  int capacity = 100;
  cout << "Array Before Deletion is:\n[";
  arrayTraversal (arrD, size);

  cout << "]\n\n";
  size -= 1;
  arrayDeletion (arrD, size, index);
  cout << "Array After Deletion is:\n[";
  arrayTraversal (arrD, size);
  cout << "]";
  return 0;
}

