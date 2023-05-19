#include <iostream>
#include <string>

class Entity
{

public:
    Entity()
    {
        std::cout << "Created Entity" << std::endl;
    }

    ~Entity()
    {
        std::cout << "Destroyed Entity" << std::endl;
    }
};

class ScopedPtr
{
private:
    Entity *m_Ptr;

public:
    ScopedPtr(Entity *ptr) : m_Ptr(ptr) {}

    ~ScopedPtr()
    {
        delete m_Ptr;
    }
};

void CreateArray(int *array)
{ // pointer -> memoria no heap (são é desalocada quando sai do scope)
    // create array
}

int main()
{

    int array[50];
    CreateArray(array);

    {
        Entity entity;              // no stack, a variavel é destruida quando sai do scope
        ScopedPtr e = new Entity(); // tamebm é destruida quando sai do scope apesar de utilizar o heap  (por causa do delete no destructor)
    }

    {
        Entity *entity1 = new Entity; // no heap (a entidade não é destruida e a memoria só é limpa quando a aplicação termina)
    }
}