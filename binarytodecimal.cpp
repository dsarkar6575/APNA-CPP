#include<bits\stdc++.h>
using namespace std;
int binarytodecimal(int n)
{
    int ans=0;
    int x=1;
    while(n>0)                                //Binary to Decimal
    {
        int y=n%10;
        ans+=x*y;
        x*=2;
        n/=10;
        
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    cout<<binarytodecimal(n);
    return 0;
}