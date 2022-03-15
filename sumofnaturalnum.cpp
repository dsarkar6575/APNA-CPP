#include<iostream>
#include<math.h>
using namespace std;
int sumnaturalnumber(int n)
{
    int sum=0;
    for(int i=0;i<=n;i++)
    {
        sum=sum+i;
    }
    return sum;
}
int main()
{
    int n;
    cout<<"Enter the number of nutaral number:";
    cin>>n;
    cout<<"After addition natural numebr is:"<<sumnaturalnumber(n);
    return 0;
}