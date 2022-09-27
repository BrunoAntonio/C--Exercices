#include <iostream>

static int s_var = 10; // apenas está visivel no static.cpp (semelhante a privada)
int var = 5;           // variavel global

static void print()
{ // apenas está visivel no static.cpp (semelhante a privada)
    std::cout << "Hello from static" << std::endl;
}

void globalPrint()
{ // função global
    std::cout << "Hello from global" << std::endl;
}