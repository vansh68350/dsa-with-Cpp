#include<iostream>
#include<iomanip>
using namespace std;
int linear_search(int arr[], int size, int element)
{
    for(int i=0; i<size; i++)
    {
        if(arr[i] == element)
        {
            return i;

        }
    }
    return -1;
}
int main()
{
    int arr[100] ={101, 102, 104, 105, 108,109,123};
    int size=sizeof(arr)/sizeof(arr[0]);
    int element;
    cout<<"these all are the present in array: "<<endl;
    for(int i=0; i<7;i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<"\nenter a element you want to check is present in array: ";
    cin>>element;
    int linear_store= linear_search(arr, size, element);
    cout<<"The Element you given "<<element<<" was found at index: ["<<linear_store<<"]";
    return 0;
}