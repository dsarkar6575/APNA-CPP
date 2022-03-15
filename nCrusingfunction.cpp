#include<iostream>
using namespace std;
int factorial(int n)
{
    int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
}
int nCr(int n,int r)
{
    int nk=factorial(n);
    int demon=factorial(r)*factorial(n-r);
    return nk/demon;

}
int main()
{
    int n;
    int r;
    cin>>n>>r;
    cout<<"The result of nCr is:"<<nCr(n,r);
    return 0;
}