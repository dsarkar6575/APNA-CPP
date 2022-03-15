#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;  //point next node;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};
void insertattail(node* &head,int val )   //head insert by reference and node by value
{
    node* n=new node(val);   //node is n and his data filled is val;   and next filled is null;  
    if(head==NULL)
    {
        head=n;
        return;
    } 
    node* temp=head;      //start from first node;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
}
    void display(node* head){
        node*temp=head;
        while (temp!=NULL)             //traverse linked list
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl; 
        
    }
int main()
{
   node* head=NULL;
   insertattail(head,1);
   insertattail(head,2);
   insertattail(head,3);
   display(head);
    return 0;
}