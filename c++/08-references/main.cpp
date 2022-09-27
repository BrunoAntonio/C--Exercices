#include <iostream>

void increment(int &value)
{
    value++;
}

int main()
{

    // references -> semelhante aos ponteiros mas têm de referenciar variaveis existentes ao contrario dos ponteiros. Nos ponteiros
    //  pode se ter um espaço de memoria null.
    int a = 5;
    std::cout << a << std::endl;

    int &ref = a; // ref é um alias de "a", não é mesmo uma variavel
    ref = 2;
    std::cout << a << std::endl;
    std::cout << ref << std::endl;

    increment(a);
    std::cout << a << std::endl;
}