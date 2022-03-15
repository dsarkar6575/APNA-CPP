#include<iostream>
using namespace std;
class a{               //function overloading
    public:
    void fun()
    {
        cout<<"This is a function with no argument."<<endl;
    }
    void fun(int n)
    {
        cout<<"This is a function with intiger argument."<<endl;
    }
    void fun(int x,float y)
    {
        cout<<"This is a function with two argument"<<endl;
    }
};
int main()
{
    a obj;
    obj.fun();
    obj.fun(4);
    obj.fun(2,3);
}