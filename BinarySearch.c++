#include <iostream>
#include <iomanip>
using namespace std;
int binary_search(int arr[], int size, int element)
{
    int mid, low, high;
    low=0;
    high= size-1;
    while (low <= high)
    {
        // start searching the element here//
        mid = (low + high) / 2;
        if (arr[mid] == element)
        {
            return mid;
        }
        if (arr[mid] < element)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
        // stop searching the element here beacause element will be found after above the condition will be mentiond.//
    }
    return -1;
}
int main()
{
    int arr[20] = {101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120};
    int size = sizeof(arr)/ sizeof(arr[0]);
    int element;
    cout<<"\nthese all are the element of an array: "<<endl<<endl;
    cout<<"{";
    for(int i = 0 ; i<20; i++)
    {
        cout<<arr[i]<<" ";

    }
    cout<<"}"<<endl;
    cout<<"\nEnter the element which you found with the binary search: ";
    cin>>element;
    int binary_store= binary_search(arr,size,element);
    cout<<"the element "<<element<<" was found at index ["<<binary_store<<"]";
    return 0;
}