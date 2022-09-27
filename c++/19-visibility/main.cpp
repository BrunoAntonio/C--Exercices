#include <iostream>
#include <string>

class Entity
{
private: // só podem ser acedidos dentro da classe e classes amigas
    int X, Y;

protected: // podem ser acedidos dentro da classe e sub classes
    int Z = 5;

public: // pode ser acedido fora da classe
    Entity()
    {
        X = 0;
        Y = 0;
    }

    void print()
    {
        std::cout << X << ", " << Y << std::endl;
    }
};

class Player : public Entity
{
public:
    Player()
    {
        Z;
    }

    void print()
    {
        std::cout << Z << std::endl;
    }
};

int main()
{

    Entity e;
    e.print();

    Player p;
    p.print();
}