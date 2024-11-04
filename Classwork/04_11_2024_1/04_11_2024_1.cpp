#include <vector>
#include <iostream>
#include <string>

class Animal
{
public:
    virtual void makeVoice() = 0;
    
};
class FlyingAnimal
{
public:
    virtual void makeVoice() = 0;
    virtual void fly() = 0;
};

class Bear : Animal
{
public:
    virtual void makeVoice()
    {
        std::cout << "roar";
    }
    virtual void fly()
    {
        //nothing
    }
};

int main()
{
}