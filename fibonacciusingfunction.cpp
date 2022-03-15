#include<iostream>
using namespace std;
void fibonacci(int n)                             //fibonacci
{
    int a=0;
    int b=1;
    
    for(int i=1;i<=n;i++)
    {
        cout<<a<<" ";
        int c=a+b;
        a=b;
        b=c;
        
    }
}
int main()
{
int n;
cin>>n;
fibonacci(n);
    return 0;
}