#include<iostream>
#include<cstdlib>
using namespace std;
struct node
{
    int data;
    struct node *next;
}*head;
int countNode;
void createlist()
{
    int n,i,data;
    struct node *newnode, *temp;
    cin>>n;
    if(n==0)
    {
        cout<<"NO linked list yet"<<endl;
    }
    else
    {
        cin>>data;
        head=(struct node*)malloc(sizeof(struct node));
        head->data=data;
        head->next=NULL;
        temp=head;
        for(i=2; i<=n; i++)
        {
            newnode=(struct node*)malloc(sizeof(node));
            cin>>data;
            newnode->data=data;
            newnode->next=NULL;
            temp->next=newnode;
            temp=temp->next;
        }
    }


}
void display()

{
    struct node *temp;
    temp=head;
    countNode=0;
    while(temp!=NULL)
    {
        countNode++;
        cout<<temp->data;
        cout<<endl;
        temp=temp->next;
    }
}
void insertinasortedlinkedlist()
{
    struct node *p, *q, *t;
    p=head;
    q=NULL;
    int data;
    cin>>data;
    t= (struct node*)malloc(sizeof(struct node));
    t->data= data;
    if(countNode==0)
    {
        head=t;
    }
    else
    {
        while(p && p->data<data)
        {
            q=p;
            p=p->next;
        }
        if(p==head)
        {
            t->next=head;
            head=t;
        }
        else
        {
            t->next=q->next;
            q->next=t;
        }

    }

}
int main()
{
    createlist();
    display();
    insertinasortedlinkedlist();
    cout<<"display after insertion"<<endl;
    display();
}

