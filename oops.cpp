#include<iostream>
using namespace std;
class student{
    string name;//This is private data member
    public://from there data member is public
    
    int age;
    char gender;

    void setname(string s)
    {
        name=s;
    }
    student() {
        cout<<"This is a default constractor............"<<endl;
    }//This is a default constractor...............................
    student (string s,int a,char g)
    {
        cout<<"This is parameterised constractor."<<endl;
        name=s;
        age=a;
        gender=g;
    }//This is a paramitarised  constractor.................
    student(student &a)
    {
        cout<<"This is copy constractor."<<endl;
        name=a.name;
        age=a.age;
        gender=a.gender;

    }
    ~student()
    {
        cout<<"This is distractor func.."<<endl;
    }
    void getname()
    {
        cout<<name<<endl;
    }
    void printinfo()
    {
        cout<<"Name="<<name<<endl;
        cout<<"Age="<<age<<endl;
        cout<<"Gender="<<gender<<endl;
        cout<<endl;
        
    }
    int operator == (student &a)
    {
        if(name==a.name && age==a.age && gender==a.gender)
        {
            return true;
        }
        return false;
    }
};
int main()
{
// student arr[4];
// for(int i=0;i<4;i++)
// {
//     string s;
//     cout<<"Enter name:";
//     cin>>s;
//     arr[i].setname(s);
//    // cin>>arr[i].name;
//     cout<<"Enter age:";
//     cin>>arr[i].age;
//     cout<<"Enter gender:";
//     cin>>arr[i].gender;
// }
// for(int i=0;i<4;i++)
// {
//     arr[i].printinfo();
// }
student a("dipankar",20,'m');
//a.printinfo();
student b; 
student c=a;
c.printinfo();
if(c==a)
{
    cout<<"Same"<<endl;
}
else{
    cout<<"Not same"<<endl;
}
}