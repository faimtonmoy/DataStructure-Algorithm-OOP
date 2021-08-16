#include<bits/stdc++.h>
using namespace std;
class Player
{
private:
    string name;
    int health;
    int xp;
public:
    Player();
    Player(string name_val);
    Player(string name_val, int health_val, int xp_val);
};

Player:: Player()
    :Player{"none",0,0} //delegating constructor, calling the three args one first, after that executes this one.
{
    cout<<"No args constructor"<<endl;
}
Player:: Player(string name_val)
    :Player{name_val, 0,0} //delegating constructor, calling the three args one first, after that executes this one.
{
    cout<<"One arg constructor"<<endl;
}
Player:: Player(string name_val, int health_val, int xp_val)
    :name{name_val}, health{health_val}, xp{xp_val}
{
    cout<<"Three args constructor"<<endl;
}
int main()
{
    Player none;
    Player Faim {"Faim"};
    Player villain {"villain", 10, 12};

}
