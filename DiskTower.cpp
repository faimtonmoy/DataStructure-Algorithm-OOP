#include<bits/stdc++.h>
using namespace std;
priority_queue<int>pq;
int main(){
    int n,i;
    cin>>n;
    int a[n];
    int t=n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        pq.push(a[i]);
    
    while(pq.top()==t)
    {
        cout<<pq.top()<<" ";
         t--;
        pq.pop();
       
    }
    cout<<endl;
    }
}