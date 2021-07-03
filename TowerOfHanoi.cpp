#include<bits/stdc++.h>
using namespace std;
int toh(int n, int a,int b, int c)
{
    if(n>0)
    {
        toh(n-1,a,c,b);
        cout<<"moved from " <<a <<" to " <<c<<endl;
        toh(n-1,b,a,c);
    }
}
int main()
{
    toh(3,1,2,3);
}
