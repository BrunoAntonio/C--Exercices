#include <iostream>

// so existe uma instancia da variavel em todas as instancias da classe. Se uma instancia da classe mudar o valor da variavel esse valor muda para todas as instancias
struct Entity
{
    int x, y;

    void print()
    {
        std::cout << x << ", " << y << std::endl;
    }
};

struct StaticEntity
{
    static int x, y;

    static void print()
    {
        std::cout << x << ", " << y << std::endl;
    }
};

int StaticEntity::x; // definir as variaveis estaticas
int StaticEntity::y;

int main()
{
    Entity e;
    e.x = 1;
    e.y = 2;

    Entity e1 = {5,
                 6};

    e.print();
    e1.print();

    // static
    StaticEntity s_e;
    s_e.x = 1;
    s_e.y = 2;

    StaticEntity s_e1;
    s_e.print();
    s_e1.print();

    StaticEntity::x = 5;
    StaticEntity::y = 5;
    StaticEntity::print();
}