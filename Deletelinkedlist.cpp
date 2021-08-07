#include<iostream>
#include<cstdlib>
using namespace std;
struct node
{
    int data;
    struct node *next;
}*head;
int countnode;
void createlist()
{
    int n,i,data;
    struct node *newnode, *temp;
    cin>>n>>data;
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
void display()

{
    struct node *temp;
    temp=head;
    countnode=0;
    while(temp!=NULL)
    {
        countnode++;
        cout<<temp->data;
        cout<<endl;
        temp=temp->next;
    }
}
int deletelinkedlist()
{
    struct node *p, *q;
    int x=-1,input;

    cin>>input;
    if(input<1 || input>>countnode)
    {
        cout<<"no not found"<<endl;
        return 0;
    }
    if(input==1)
    {
        q=head;
        x=head->data;
        head= head->next;
        delete q;
        cout<<"Deleted value "<< x<<endl;
    }
    else
    {
        p=head;
        for(int i=0;i<input-1;i++)
        {
            q=p;
            p=p->next;
        }
        q->next=p->next;
        x=p->data;
        delete p;
        cout<<"Deleted value "<< x<<endl;
    }



}
int main()
{
    createlist();
    display();
    deletelinkedlist();
    display();
}

