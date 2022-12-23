#include <iostream>
#include <string>
#include <cstring>
#include <stdlib.h>

int main()
{

    const char *name = "Br\0uno";

    char name1[] = "Bruno";
    name1[2] = 'a';

    const char *name2 = u8"Bruno"; // 1 byte (8 bits) por caracter
    const wchar_t *name3 = L"Bruno";
    const char16_t *name4 = u"Bruno"; // 2 bytes (16 bits) por caracter
    const char32_t *name5 = U"Bruno"; // 4 bytes (32 bits) por caracter

    std::cout << strlen(name) << std::endl;
    std::cout << name1 << std::endl;

    using namespace std::string_literals;
    std::string name6 = "Bruno"s + "Cardoso";
    std::wstring name7 = L"Bruno"s + L"Cardoso";
    std::u32string name8 = U"Bruno"s + U"Cardoso";

    const char* name9 = R"(Bruno
    Cabanas
    Cardoso)";

    const char* name10 = "Bruno\n"
    "Cabanas\n"
    "Cardoso\n";
}