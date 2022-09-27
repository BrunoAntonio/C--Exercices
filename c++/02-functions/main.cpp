#include <iostream>

int multiply(int a, int b)
{
    return a * b;
}

void sum(int a, int b)
{
    std::cout << a + b << std::endl;
}

int main()
{
    int result = multiply(5, 5);
    std::cout << result << std::endl;

    sum(5, 5);

    std::cin.get();
}