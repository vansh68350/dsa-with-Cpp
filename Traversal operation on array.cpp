#include<iostream>
using namespace std;
int arrayTraversal(int arrI[] , int size)
{
    for(int i = 0 ; i<size; i++)
    {
        cout<<" The Element Are: "<<arrI[i]<<endl;
    }
}
int arrayInsertion(int arr[],int size,int index, int element,int capacity)
{
    if(size>=capacity)
    {
        return -1;
    }
    for(int i = size - 1; i>=index; i--)
    {
        arr[i+1] = arr[i];
        
    }
    arr[index] = element;
    return 1;
}
int main() {
    int arrI[7] = { 12,14,16,18,19,10,19};
    int size = sizeof(arrI)/sizeof(arrI[0]);
    int index = 3;
    int element = 9000;
    int capacity = 100;
    cout<<"Array Element Before traversal are: "<<endl;
    arrayTraversal(arrI,size);
    size+=1;
    int Insertion = arrayInsertion(arrI, size,index,element,capacity);
    cout<<"Array Element After traversal are: "<<endl;
    arrayTraversal(arrI,size);
}
