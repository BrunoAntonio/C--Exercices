#include <iostream>
#include <string>
#include <cstring>

void PrintString(const std::string& string){ // referencia que não vai ser copiada (&) nem modificada (const)
    std::cout << string << std::endl;
}

int main()
{
    const char *name = "Bruno";
    char *name1 = "Cabanas";

    std::cout << strlen(name) << std::endl;

    char name2[6] = {'B', 'R', 'U', 'N', 'O', 0};
    std::cout << name2 << std::endl;

    std::string name3 = "Bruno";
    std::cout << name3 << std::endl;
    std::cout << name3.size() << std::endl;

    std::string name4 = "Bruno" + std::string("Cardoso");
    name4 += "Cabanas";
    std::cout << name4 << std::endl;

    bool contains = name4.find("Bru") != std::string::npos;
    std::cout << contains << std::endl;

    PrintString(name4);
}