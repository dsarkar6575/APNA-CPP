#include<iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;//1 2 3 4
    }
    cout<<endl;
    vector<int>::iterator it;
    for(it=v.begin();it!=v.end();it++)
    {
        cout<<*it<<endl;  //1 2 3 4
    }
    cout<<endl;
    for(auto element:v)
    {
        cout<<element<<endl;//1 2 3 4
    }
    cout<<endl;
    v.pop_back();
    for(int i=0; i<v.size();i++)
    {
        cout<<v[i]<<endl;//1 2 3
    }
    cout<<endl;
  
    cout<<endl;
    vector<int> v2(4,50);//50 50 50 50 
    swap(v,v2);
     for(auto element:v)
    {
        cout<<element<<endl;
    }
    cout<<endl;                      //swap(v,v2)
    for(auto element:v2)
    {
        cout<<element<<endl;
    }
    cout<<endl;

    //sort(v.begin(),v.end());
    return 0;
}