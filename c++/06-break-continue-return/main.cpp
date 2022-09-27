#include <iostream>

int main()
{

    for (int i = 0; i < 5; i++)
    {
        if ((i + 1) % 2 == 0)
        {
            continue; // passar à proxima iteração
        }
        std::cout << i << std::endl;
    }

    for (int i = 0; i < 5; i++)
    {
        if ((i + 1) % 2 == 0)
        {
            break; // termina o for loop quando se chega ao break
        }
        std::cout << i << std::endl;
    }

    return 100; // retorna um valor da função
}