#include<iostream>
#include<iomanip>
using namespace std;
int insertion_array(int arr[], int size, int element, int capacity, int index)
{
    if(size>= capacity)
    {
        return -1;
    }
    for(int i=size-1; i>=index;i++)
    {
        arr[i+1] =arr[i];
    }
    arr[index] = element;
    return 1;

}
int main()
{
    int arr[100] = {12,13,14,15,17,18};
    int size = sizeof(arr)/sizeof(arr[0]);//4+4+4+4+4+4/4=6
    int element = 16;
    int capicity = 100;
    int index = 5;
    int insert = insertion_array(arr,size,element, capicity, index);

    return 0;
}