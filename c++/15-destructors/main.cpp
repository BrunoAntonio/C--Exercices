#include <iostream>

class Entity
{

public:
    float X, Y;

    Entity()
    {
        std::cout << "Created Entity" << std::endl;
    }

    Entity(float x, float y)
    {
        X = x;
        Y = y;
    }

    ~Entity()
    {
        std::cout << "Destroyed Entity" << std::endl;
    }

    void print()
    {
        std::cout << X << ", " << Y << std::endl;
    }
};

void function()
{
    Entity e; // objeto criado no stack, destruido quando sai do scope (quando a função termina)
    e.print();
}

int main()
{
    function();
}
