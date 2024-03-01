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
  for (int i = index; i < size -1; i++)
	{
		arrD[i] = arrD[i + 1];
	}
}

int
main ()
{
  int arrD[100] = { 29,87,92,39,45};
  int size = 5;
  int index = 0;
  cout << "Array Before Deletion is:\n[";
  arrayTraversal (arrD, size);
  cout << "]\n\n";
  arrayDeletion (arrD, size, index);
  size-=1;
  cout << "Array After Deletion is:\n[";
  arrayTraversal (arrD, size);
  cout << "]";
  return 0;
}

