#include<bits/stdc++.h>
using namespace std;
class Youtube
{
public:
    string Name;
    int SubscriberCount;
    Youtube(string name, int subscriberCount)
    {
        Name= name;
        SubscriberCount= subscriberCount;
    }
    bool operator==(const Youtube& yt)const //we have to provide this as remove function internally use this "=="operator,
    //it has to be const, making sure that it won't change. otherwise computer will provide an error.
    {
        return this->Name== yt.Name;
    }
};
class MyCollection
{
public:
    list<Youtube>mychannels;
    void operator += (Youtube& yt)
    {
        this->mychannels.push_back(yt);
    }
    void operator -= (Youtube& yt)
    {
        this->mychannels.remove(yt);
    }
};
ostream& operator<<(ostream& COUT, Youtube& yt1)
{
    COUT << "Name: "<< yt1.Name<<endl;
    COUT << "Subscribers: "<<yt1.SubscriberCount<<endl;
    return COUT;
}
ostream& operator<<(ostream& COUT, MyCollection& myCollection)
{
    for(Youtube ytChannel: myCollection.mychannels)
    {
        COUT<<ytChannel<<endl;
    }
}
int main()
{
    Youtube yt1= Youtube("Faim", 10000000);
    Youtube yt2= Youtube("Faimmm", 10000001);
    //cout << yt1<<yt2;
    MyCollection myCollection;
    myCollection += yt1;
    myCollection+= yt2;
    myCollection-=yt1;
    cout<<myCollection;
}
