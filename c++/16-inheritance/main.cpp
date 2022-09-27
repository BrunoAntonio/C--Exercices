#include <iostream>

class Entity
{
public:
    int X, Y;

    void move(float xa, float ya)
    {
        X += xa;
        Y += ya;
    }
};

class Player : public Entity
{
public:
    const char *name;

    void printName()
    {
        std::cout << name << std::endl;
    }
};

int main()
{
    std::cout << sizeof(Entity) << std::endl;
    std::cout << sizeof(Player) << std::endl;

    Player player;
    player.move(5, 5);
    player.name = "Hello";
    player.printName();
}