#include <iostream>
#include <vector>
#include <string>

class Human
{
public:
    std::string name;
    std::string eyeColor = "brown";

    Human(std::string name = "")
    {
        this->name = name;
    }
    
    void speack(std::string text)
    {
        std::cout << text;
    }

    virtual void previousSelf()
    {
        std::cout << name;
    }
private:
    std::string passData = "";
};

class Engineer : Human
{
public:
    Engineer(std::string name = "")
    {
        this->name = name;
    }
    virtual void previousSelf()
    {
        std::cout << "Hello, I'm " << name << ". ANn=-nd I'm engeniear";
    }
};

int main()
{
    setlocale(LC_ALL, "rus");

    Human human = Human("Егор");
    human.previousSelf();

    Engineer engineer("Антон");
    engineer.previousSelf();
}