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

void function(){
    int a = 1;
    Entity entity1 = Entity("Bruno"); // (stack) destruidas todas as variaveis e instancias assim que termina a execução a função.
}


int main()
{

    Entity entity;
    Entity entity1("Bruno");
    std::cout << entity.GetName() << std::endl;
    std::cout << entity1.GetName() << std::endl;


    Entity* e1;
    {
        Entity entity2("Bruno1");
        e1 = &entity2;
        std::cout << "inside" << entity2.GetName() << std::endl;
    }
    //entity2 -> (armazenada no stack) só valido dento do escopo {}


    Entity* e2;
    {
        Entity *entity3 = new Entity("Bruno1"); // (new) alocar no heap -> localização do heap onde está a ser alocada a entidade
        e2 = entity3;
        std::cout << "inside" << entity3->GetName() << std::endl;
    }
    delete e2; //apagar a entity do heap


}