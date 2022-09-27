#include <iostream>

class Printable
{
public:
    virtual std::string getClassName() = 0; // //tem de ser implementada numa sub classe
};

class Entity : public Printable
{
public:
    virtual std::string getName()
    {
        return "Entity";
    }

    std::string getClassName()
    {
        return "Entity class";
    }
};

class Player : public Entity
{
private:
    std::string m_name;

public:
    Player(const std::string &name)
        : m_name(name) {}

    std::string getName()
    {
        return "Player";
    }

    std::string getClassName()
    {
        return "Player class";
    }
};

void printName(Entity *entity)
{
    std::cout << entity->getName() << std::endl;
}

void printClassName(Entity *entity)
{
    std::cout << entity->getClassName() << std::endl;
}

int main()
{
    Entity *e = new Entity();
    Player *p = new Player("Hello");

    printName(e);
    printClassName(e);
    printName(p);
    printClassName(p);
}