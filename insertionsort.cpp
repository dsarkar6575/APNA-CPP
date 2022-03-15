#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    int arr[n];
    cout<<"Element:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    //Insert an element from uncorted array to its correct psition in sorted array.
    for(int i=0;i<n;i++)
    {
        int current=arr[i];
        int j=i-1;
        while (arr[j]>current && j>=0)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
        
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}