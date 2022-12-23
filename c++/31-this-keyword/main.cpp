#include <iostream>
#include <string>

void PrintEntity(Entity *e);

struct Entity
{
    int x, y;

    Entity(int x, int y)
    {
        // Entity *e = this;

        this->x = x;
        this->x = y;

        PrintEntity(this);
    }

    int GetX() const
    {
    }
};

void PrintEntity(Entity *e)
{
}

int main()
{
}