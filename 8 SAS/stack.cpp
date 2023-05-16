#include<iostream>
using namespace std;
int stack[100],ch,n,top=-1,x,i;
void push(int x)
{
    if(top>=n-1)
    {
        cout<<"\nStack overflow";
    }
    else
    {
        stack[++top]=x;
    }
}
void pop()
{
    if(top==-1)
    {
        cout<<"\nStack Underflow";
    }
    else
    {
        cout<<"\nPopped element is: "<<stack[top--];
     //   top--;
    }

}
void display()
{
    if(top>=0)
    {
        cout<<"----------------------";
        cout<<"\nElements   Memory\n";
        cout<<"----------------------\n";
        for(i=top;i>=0;i--)
        {
            cout<<"   "<<stack[i]<<"\t  "<<&stack[i]<<endl;
        }
        cout<<"----------------------";
    }
    else
    {
        cout<<"\nstack is empty";
    }

}
int main()
{
    cout<<"Enter size of Stack";
    cin>>n;
    do{
        cout<<"\n\n 1.Push\n 2.Pop\n 3.Display\n 4.Exit";
        cout<<"\nChoice: ";
        cin>>ch;
        switch(ch)
        {
            case 1:
            {
                cout<<"\nEnter Label: ";
                cin>>x;
                push(x);
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                display();
                break;
            }
            case 4:
            {
                break;
            }
            default:
            {
                cout<<"\nEnter valid choice";
                break;
            }
            }

    }while(ch!=4);
    return 0;
}
