#include <iostream>
#include <string>

class Example
{
    public:
        Example(){
            std::cout << "Created Entity" << std::endl;
        }

        Example(int x){
            std::cout << "Created Entity with " << x << std::endl;
        }
};

class Example1
{
    public:
        Example1(){
            std::cout << "Created Entity1" << std::endl;
        }

        Example1(int x){
            std::cout << "Created Entity1 with " << x << std::endl;
        }
};

class Entity
{
private:
    std::string m_Name;
    Example m_Example;
    Example1 m_example1;

public:
    Entity()
        : m_example1(Example1(8)) // só cria uma instancia
    {
        m_Name = "Unknown";
        m_Example = Example(8); // cria duas instancias
    }

    Entity(const std::string& name){
        m_Name = name;
    }

    const std::string& GetName() const{
        return m_Name;
    }
    
};

class Entity1
{
private:
    std::string m_Name;

public:
    Entity1()
        : m_Name("Unknown"){

        }
    
    Entity1(const std::string& name)
        : m_Name(name){

        }

    const std::string& GetName() const{
        return m_Name;
    }
    
};

int main()
{
    Entity e0;
    std::cout << e0.GetName() << std::endl;

    std::cout << "##################" << std::endl;
    Entity e1("Bruno");
    std::cout << e1.GetName() << std::endl;

}