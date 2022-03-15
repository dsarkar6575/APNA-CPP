#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=2;i<=n;i++)
    {
        if(n%i==0)
        {
            cout<<"The number is not prime.";
            break;
        }
        else{
            cout<<"The number is  a prime number.";
            break;
        }
        
    }
    
    return 0;

}