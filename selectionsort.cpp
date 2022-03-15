#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the element of the array:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    //Find the minimum element in usnorted array and swap it with element at begining
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[i])
            {
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}