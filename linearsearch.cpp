#include<iostream>
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
    int key;
    cout<<"Enter the searching element:";
    cin>>key;
    for(int j=1;j<=n;j++)                                          //Linear search
    {
        if(key==arr[j])
        {
            cout<<"The element is preasent.";
            break;
        }
        else{
            cout<<"The element is not present in this array.";
            break;
        }
    }
}