#include <iostream>
#include <string>

using String = std::string;

class Entity
{
private:
    String m_Name;

public:
    Entity() : m_Name("Unknown"){}

    Entity(const String& name) : m_Name(name){}

    const String& GetName() const {return m_Name;}
};

int main()
{

    int a = 2;
    int* b = new int[50]; //200 bytes
    Entity* e = new Entity[50]; // array of entities

    Entity* e1 = new Entity();
    
    malloc(50); // ao se utilizar o new utiliza-se o malloc para alocar memoria, mas tambem chama o construtor vazio
    Entity* e2 = (Entity*)malloc(sizeof(Entity)); //semelhante, mas não inicia o construtor

    delete[] e;
    delete e1;



}