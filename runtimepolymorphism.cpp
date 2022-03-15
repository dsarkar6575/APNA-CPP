

//runtime polymorphism  


#include<bits/stdc++.h>
using namespace std;
class base{
 public:
    void print()
    {
        cout<<"It is the base class's print function"<<endl;
    }
    void display()
    {
        cout<<"It is the base class's display function"<<endl;
    }
};
class derive:public base             //inharit from base class
{
   public:
        void print(){
            cout<<"This is the derived class's print function"<<endl;
        }
        void display(){
            cout<<"This is the derived class's display function"<<endl;
        }
};
int main()
{
    base *baseptr;
    derive d;
    baseptr=&d;
    baseptr ->print();
    baseptr ->display();
    return 0;
}