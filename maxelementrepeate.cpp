#include<iostream>
using namespace std;
int main()
{
    int mx=-10;
    int n;
    cin>>n;
    int arr[n];
    cout<<"element:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        mx=max(mx,arr[i]);
        cout<<mx<<" ";
    }
}