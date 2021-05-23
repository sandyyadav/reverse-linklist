#include<iostream>
using namespace std;
struct node
{
    int data;

    struct node* link;
};
struct node* head=nullptr;
void insertnode (struct node* t)
{
    struct node* arr;
    arr=(struct node*)malloc(sizeof(struct node));
    arr->link=nullptr;
    cout<<"\nenter data\n";
    cin>>arr->data;
    if(t==nullptr)
    {
        head=arr;
    }
    else
    {
        while(t->link!=nullptr)
        {
            t=t->link;
        }
        t->link=arr;
    }
}
struct node* reversenode(struct node* t)
{
    struct node* prev=t;
    struct node* curr=t->link;
    prev->link=nullptr;
    while(curr!=nullptr)
    {
        t=curr->link;
        curr->link=prev;
        prev=curr;
        curr=t;
    }
    return prev;
}
void printnode(struct node* t)
{
    while(t!=nullptr)
    {
        cout<<"\n"<<t->data;
        t=t->link;
    }
}
int main()
{
    int k;
    cout<<"1 for enter value in node";
    cout<<"\n 2 for reverse the node";
    cout<<"\n 3 for print";
    cout<<"\n3 for end program";
    while(1)
    {
    cout<<"\nenter your choice\n";
    cin>>k;
        if(k==1)
        {
            insertnode(head);
        }
        else if(k==2)
        {
            head=reversenode(head);
        }
        else if(k==3)
        {
            printnode(head);
        }
        else
        {
            return 0;
        }
    }
}
