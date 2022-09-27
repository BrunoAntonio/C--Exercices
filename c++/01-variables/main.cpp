#include <iostream>

int main()
{

    int variable = 8;
    // int
    // 4 bytes of data -> 32 bites of data (1 byte = 8 bites)
    // 1 bite for the sign (- or +) -> 31 bites for the number (the bit can be 0 or 1)
    // 2^31 = 2,147,483,648 (2 billion)
    // range of int: -2 billion to +2 billion

    unsigned int var = 8;
    // int allways positive
    // não reserva 1 bite para o sinal
    // 2^32 = 4,294,967,296 (4 billion)
    // range of unsigned int: 0 to +4 billion

    char a = 'A';
    char aa = 65; // -> print A
    // 1 byte of data

    float d = 8.8f;
    // 4 bytes of data

    double dd = 8.8;
    // 8 bytes of data

    bool vv = false;
    // 1 byte -> only needs one bite (true or false) but it is not possible to access just one bite (é possivel colocar vários valores bool num byte)
    // false - 0
    // true - anything else than 0

    short b;
    unsigned short bb;
    // 2 bytes of data

    long c;
    unsigned long cc;
    // 4 bytes of data

    long long m;
    // 8 bytes of data

    std::cout << var << std::endl;
    std::cout << a << std::endl;
    std::cout << aa << std::endl;
    std::cout << d << std::endl;
    std::cout << dd << std::endl;
    std::cout << sizeof(vv) << std::endl;
    std::cin.get();
}