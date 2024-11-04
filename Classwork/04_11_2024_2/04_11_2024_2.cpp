#include <vector>
#include <iostream>
#include <string>

class Spliter
{
    virtual void split() = 0;
};

class Knife : Spliter
{
public:
    virtual void split()
    {
        std::cout << "split with knife";
    }
};

class Chainsaw : Spliter
{
public:
    virtual void split()
    {
        std::cout << "split with FUCKING CHAINSAW";
    }
};

class Human
{
public:
    Chainsaw knife;
    void onBirthDay()
    {
        split();
        split();
        split();
        split();
        split();
        split();
        split();
    }
};

int main()
{
    Human human;
    human.onBirthDay;
}