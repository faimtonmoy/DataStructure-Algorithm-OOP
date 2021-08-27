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
    for(i=1;i<n;i++)
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
    }while(p != first);
    return len;
}

void insertion(struct node *p, int index, int x)
{
    struct node *t;
    int i;
    if(index<0 || index>length())
    {
       return;
    }
    if(index==0)
    {
        t= (struct node*)malloc(sizeof(struct node));
        t->data=x;
        if(first==NULL)
        {
            first= t;
            first->next= first;
        }
        else
        {
            while(p->next!=first)p=p->next;
            p->next=t;
            t->next= first;
            first=t;
        }
    }
    else
    {
        for(i=0;i<index-1;i++)
        {
            p=p->next;
            t= (struct node*)malloc(sizeof(struct node*));
            t->data=x;
            t->next= p->next;
            p->next=t;
        }
    }
}

void display(struct node *p)
{
    do
    {
        cout<<p->data<<endl;
        p=p->next;
    }while(p!=first);
}

int main()
{
    int a[]= {1,2,3,4,5};
    create(a,5);
    insertion(first, 2, 10);
    display(first);
}
