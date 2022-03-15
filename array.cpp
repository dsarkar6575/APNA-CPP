#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=1;i<=n;i++)              //array
    {
        cin>>arr[i];
    }
    for(int j=1;j<=n;j++)
    {
        cout<<arr[j]<<" ";
    }

}