

//clearbit

#include<iostream>
using namespace std;
int clearbit(int n,int pos){
    int mark= ~(1<<pos);
    return (n& mark);
}
int main()
{
 cout<<clearbit(5,2); 
    return 0;
}