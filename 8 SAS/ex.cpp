#include<iostream>
#include<stdlib.h>
using namespace std;
struct node
{
    int val;
    struct node *next;
};
struct node* head=NULL;
void push(int val)
{
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
    if(head==NULL)
    {
        ptr->val=val;
        ptr->next=NULL;
        head=ptr;
    }
    else
    {
        ptr->val=val;
        ptr->next=head;
        head=ptr;
    }
}
void pop()
{
    struct node *temp;
    temp=head;
    head=temp->next;
    free(temp);
}
void display()
{
    struct node *ptr;
    ptr=head;
    cout<<"-------------------------"<<endl;
    cout<<"Element     Address"<<endl;
    cout<<"-------------------------";
    while(ptr!=NULL)
    {
        printf("\n   %d\t   %p",ptr->val,*ptr);
        ptr=ptr->next;
    }
    cout<<"\n-------------------------";
}
int main()
{
    push(23);
    push(21);
    push(45);
    display();
    pop();
    cout<<endl;
    push(4);
    display();
    return 0;
}
