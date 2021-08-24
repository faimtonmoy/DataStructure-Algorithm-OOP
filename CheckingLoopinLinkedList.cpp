#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
}*first;
void createlinklist(int a[], int n)
{
    int i;
    struct node *t, *last;
    first= (struct node *)malloc(sizeof(struct node));
    first->data= a[0];
    first->next= NULL;
    last= first;
    for(i=1;i<n;i++)
    {
        t= (struct node *)malloc(sizeof(struct node));
        t->data= a[i];
        t->next= NULL;
        last->next=t;
        last=t;
    }
}
void display(struct node *p)
{
    while(p!=NULL)
    {
        cout<<p->data<<endl;
        p= p->next;
    }
}
int isLoop(struct node *f)
{
    struct node *p, *q;
    p=q=f;
    do
    {
        p=p->next;
        q=q->next;
        if(q!=NULL)
        {
            q= q->next;
        }
    }while(p &&q != NULL && p!=q);
    if(p==q)
    {
        return 1;
    }
    else
    {
        return 0;
    }

}
int main()
{
  struct node *t1, *t2;
  int a[]={3,5,7,10,15};
  createlinklist(a,5);
  t1= first->next->next;
  t2= first->next->next->next->next;
  t2->next= t1;
  isLoop(first);
  if(isLoop)
  {
      cout<<"LOOP"<<endl;
  }
  else
  {
      cout<<"Not a loop"<<endl;
  }
}

