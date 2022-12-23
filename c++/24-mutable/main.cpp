#include <iostream>
#include <string>

class Entity
{
private:
    std::string m_Name;
    mutable int m_DebugCounter = 0;

public:
    const std::string& GetName() const {
        m_DebugCounter++;
        return m_Name;
    }
};

int main()
{
    Entity e;
    e.GetName();

    int x = 8;

    auto func = [=]() mutable { //[=] pass x por valor - não altera x fora da função
        x++;
        std::cout << "func inside " << x << std::endl;
    };
    func();
    std::cout << "x " << x << std::endl;

    auto func1 = [&]() mutable { //[&] pass x por referencia - altera x fora da função
        x++;
        std::cout << "func1 inside " << x << std::endl;
    };
    func1();
    std::cout << "x " << x << std::endl;

}