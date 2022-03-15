#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  int n;
  cout<<"Enter a number of n:";
  cin>>n;
  int sum=0;
  int orginal=n;
  while (n!=0)
  {
    int lastdigit=n%10;
    sum+=pow(lastdigit,3);                                        //153=1^3+5^3+3^3
    n/=10;
  }
  cout<<sum<<endl;
  if(sum==orginal)
  {
    cout<<"The number is amstrong.";
  }
  else{
    cout<<"The numeber is not a amstrong number.";
  }
  return 0;
}