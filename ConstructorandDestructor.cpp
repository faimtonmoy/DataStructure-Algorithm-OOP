#include<bits/stdc++.h>
using namespace std;
class Player
{
private:
    string name;
    int health;
    int xp;
public:
    void set_name(string name_val)
    {
        name= name_val;
    }
    //Overloaded Constructors
    Player()
    {
        cout<<"No args constructor called"<<endl;
    } //no args constructor
    Player(string name)
    {
        cout<<"One arg constructor called"<<endl;
    } // expects one argument constructor
    Player(string name, int health, int xp)
    {
       cout<<"Three args constructor called"<<endl;
    } // expects three arguments constructor
    ~Player()
    {
        cout<<"Destructor being called "<<name<<endl;
    } // Destructor
};
int main()
{
    Player Faim;
    Faim.set_name("Faim");

    Player Tushar("Tushar");
    Tushar.set_name("Tushar");

    Player Tanzil("Tanzil", 10, 10);
    Tanzil.set_name("Faisal");

}
