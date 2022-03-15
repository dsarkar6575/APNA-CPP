#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    int maxno=INT_MIN;
    int minno=INT_MAX;
    for(int j=1;j<=n;j++)
    {
        if(arr[j]>maxno)
        {
            maxno=arr[j];
        }
        if(arr[j]<minno)
        {
            minno=arr[j];
        }
    }
    cout<<"The maximum number is: "<<maxno<<endl;
    cout<<"The minimum number is :"<<minno<<endl;
}