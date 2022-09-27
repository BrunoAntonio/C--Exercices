#include <iostream>

int main()
{
    int x = 5;
    bool value = (x == 5);
    const char *message = "Hello";

    if (value)
    {
        std::cout << "Hello" << std::endl;
    }

    if (x == 5)
    {
        std::cout << "Hello from if" << std::endl;
    }

    if (message != nullptr)
    {
        std::cout << message << std::endl;
    }
    else if (message == "Hello")
    {
        std::cout << "Hello else if" << std::endl;
    }
    else
    {
        std::cout << "Not he value" << std::endl;
    }
}