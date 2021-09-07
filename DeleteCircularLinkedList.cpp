#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
}*first;

void create(int a[], int n)
{
    int i;
    struct node *p, *last;
    first= (struct node*)malloc(sizeof(struct node));
    first->data= a[0];
    first->next= first;
    last= first;
    for(i=1; i<n; i++)
    {
        p= (struct node*)malloc(sizeof(struct node));
        p->data= a[i];
        p->next= last->next;
        last->next= p;
        last=p;
    }
}
int length()
{
    struct node *p;
    p= first;
    int len=0;
    do
    {
        len++;
        p=p->next;
    }
    while(p != first);
    return len;
}

int deletelinkedlist(struct node *p, int index)
{
    struct node *q;
    int i,x;
    if(index==0 || index>length())
    {
        return -1;
    }
    if(index== 1)
    {
        while(p->next != first)
        {
            p=p->next;
        }
        x= first->data;
        if(first== p)
        {
            first=  NULL;
        }
        else
        {
            p->next= first->next;
            delete first;
            first= p->next;
        }
    }
    else
    {
        for(i=0; i<index-2; i++)
        {
            p=p->next;
        }
        q=p->next;
        p->next= q->next;
        x= q->data;
        delete q;

    }
    return x;
}

void display(struct node *p)
{
    do
    {
        cout<<p->data<<endl;
        p=p->next;
    }
    while(p!=first);
}

int main()
{
    int a[]= {1,2,3,4,5};
    create(a,5);
    deletelinkedlist(first,1);
    display(first);
}

