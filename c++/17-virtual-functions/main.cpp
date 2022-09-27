#include <iostream>

class Entity
{
public:
    std::string getName()
    {
        return "Entity";
    }

    virtual std::string getAddress()
    { // virtual -> se for sobrescrita aponta para a função correta
        return "Entity address";
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

    std::string getAddress()
    {
        return "Player address";
    }
};

void printName(Entity *entity)
{
    std::cout << entity->getName() << std::endl;
}

void printAddress(Entity *entity)
{
    std::cout << entity->getAddress() << std::endl;
}

int main()
{
    Entity *e = new Entity();
    Player *p = new Player("Hello");

    printName(e);
    printName(p);
    printAddress(e);
    printAddress(p);
}