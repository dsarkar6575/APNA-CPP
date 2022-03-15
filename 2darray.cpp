#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"Enter the size of array:";
    cin>>n>>m;
    int arr[n][m];
    cout<<"Elements:";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    
    }
    cout<<"The 2d array is:"<<endl;;
      for(int i=0;i<n;i++)                //rows
    {
        for(int j=0;j<m;j++)              //columns
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
}