#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    // for(int i=1;i<=n;i++)
    // {
    //     for(int j=n;j>=i;j--)
    //     {
    //         cout<<" ";
    //     }
    //     for(int k=1;k<=i;k++)
    //     {
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(j<=n-i)
            {
                cout<<"  ";
            }
            else{
                cout<<"* ";
            }
        }
        cout<<endl;
    }
    return 0;
}