#include <iostream>

int main()
{
    // for
    for (int i = 0; i < 5; i++)
    {
        std::cout << i << std::endl;
    }

    // for
    int i = 0;
    for (; i < 5;)
    {
        std::cout << i << std::endl;
        i++;
    }

    // while
    int a = 0;
    while (a < 5)
    {
        std::cout << a * 10 << std::endl;
        a++;
    }

    // do-while
    bool condition = false;
    do
    {
        std::cout << "False condition" << std::endl;
    } while (condition == true);
}