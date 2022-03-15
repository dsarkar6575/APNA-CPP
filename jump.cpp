#include<iostream>
using namespace std;
int main()
{
    int pocketmoney=30000;
    for(int date=1;date<=30;date++)
    {
       
        if(date%2==0)
        {
            continue;//it is use for skip.
        }
        if(pocketmoney==0)
        break;//it is use for terminate.
        cout<<"Go out today!"<<endl;
        pocketmoney=pocketmoney-300;
    }
    return 0;

}