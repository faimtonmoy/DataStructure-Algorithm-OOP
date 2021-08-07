#include<iostream>
#include<cstdlib>
using namespace std;
struct node
{
    int data;
    struct node *next;
}*head;
void createlist()
{
    int n,i,data;
    struct node *newnode, *temp;
    cin>>n>>data;
    head=(struct node*)malloc(sizeof(struct node));
    head->data=data;
    head->next=NULL;
    temp=head;
    for(i=2;i<=n;i++)
    {
        newnode=(struct node*)malloc(sizeof(node));
        cin>>data;
        newnode->data=data;
        newnode->next=NULL;
        temp->next=newnode;
        temp=temp->next;
    }

}
void display()

{
    struct node *temp;
    temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data;
        cout<<endl;
        temp=temp->next;
    }
}
void duplicateremove()
{
    struct node *p,*q;
    p=head;
    q=p->next;
    while(q!=NULL)
    {
        if(p->data!=q->data)
        {
            p=q;
            q=q->next;
        }
        else
        {
            p->next=q->next;
            delete q;
            q=p->next;
        }
    }
}
int main()
{
    createlist();
    display();
    duplicateremove();
    cout<<"After removing duplicate"<<endl;
    display();
}

