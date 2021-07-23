#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
int display(struct node *p)
{
    while(p!=NULL)
    {
        printf("%d\n", p->data);
        p=p->next;

    }
}
int main(){
    int a[]={3,5,7,9,11};
    int i,n=5;
    struct node *first, *last, *t;
    first= (struct node *)malloc(sizeof(struct node));
    first->data= a[0];
    first->next= NULL;
    last= first;
    for(i=1;i<n;i++)
    {
        t=(struct node *)malloc(sizeof(struct node));
        t->data= a[i];
        t->next= NULL;
        last->next= t;
        last= t;
    }
    display(first);



}
