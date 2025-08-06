#include<iostream>
#include<cstdio>
#include<malloc.h>
using namespace std;

struct node
{
    int data;
    struct node *link;
};

struct node *start=NULL;

struct node* create_list(struct node *start)
{
    struct node *new_node,*ptr;
    int datum;
    cout<<"Enter -1 for ending the insertion of datum"<<endl;
    cout<<"Enter the datum:";
    cin>>datum;
    while(datum!=-1)
    {
        new_node=(struct node*)malloc(sizeof(struct node));
        if(start==NULL)
        {
            new_node->data=datum;
            new_node->link=NULL;
            start=new_node;
        }
        else
        {
            ptr=start;
            while(ptr->link!=NULL){
                 ptr=ptr->link;
            }
           
            new_node->data=datum;
            ptr->link=new_node;
            new_node->link=NULL;
        }
        cout<<"Enter the datum:";
        cin>>datum;
    }
    return start;
}

void display_list(struct node *start)
{

    struct node *ptr;
    ptr=start;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr =ptr->link;
    }
}

int main()
{
    start=create_list(start);
    display_list(start);
}
// after before nth position ;