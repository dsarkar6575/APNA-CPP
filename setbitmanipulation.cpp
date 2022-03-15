#include<iostream>
using namespace std;
int setbit(int n,int pos)
{
    return (n | (pos<<1));
}
int main()
{
    cout<<setbit(5,1);
    return 0;
}