#include <iostream>

class Entity
{
private:
    int m_X, m_Y;
    int *m_Z;
    mutable int var;

public:
    int GetX() const // (const) nao permite modificar membros da classe
    {
        var = 2;
        return m_X;
    }

    const int *const GetZ() const // (const) nao permite modificar o ponteiro, o conteudo do ponteiro e membros da classe
    {
        return m_Z;
    }
};

void PrintEntity(const Entity &e)
{ // referencia para não copiar a classe
    std::cout << e.GetX() << std::endl;
}

int main()
{
    const int MAX = 10;
    int *a = new int;
    *a = 2;

    const int MAX1 = 10;
    const int *a1 = new int;
    a1 = (int *)&MAX1;

    const int MAX2 = 10;
    int *const a2 = new int;
    *a2 = 2;
}