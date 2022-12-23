#include <iostream>
#include <string>

using String = std::string;

class Entity
{
private:
    String m_Name;
    int m_Number;

public:
    explicit Entity(const String& name) // não permite a conversão implicita 
        : m_Name(name), m_Number(-1){}

    Entity(int number) 
        : m_Name("Unknown"), m_Number(number) {}

};

void PrintEntity(const Entity &entity){

}

int main()
{
    Entity e1("Bruno");
    Entity e2 = Entity(22);
    
    Entity e3 = 22; //implicit convertion
    PrintEntity(22); //implicit convertion

}