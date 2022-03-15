#include<iostream>
using namespace std;
void increament(int *a)
{
    *a++;
}
int main()
{
    int a=2;
    int *ptr=&a;
    increament(&a);
    cout<<a<<endl;
    return 0;
}