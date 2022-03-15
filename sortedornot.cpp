#include<iostream>
using namespace std;
bool sorted(int arr[],int n)
{
    if(n==1){
        return true;
    }
    bool restarr=sorted(arr+1,n-1);
    return(arr[0]<arr[1]&&restarr);
}
int main()
{
    int n;
    
    cout<<"Enter the size of arr:";
    cin>>n;
    cout<<"Element:";
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int i=sorted(arr,n);
    if(i==1)
    {
        cout<<"The array is sorted.";
    }
    else{
        cout<<"Is not a sorted array....";
    }

}