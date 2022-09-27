#include <iostream>

static int s_var = 10; // apenas está visivel no main.cpp
extern int var;
extern void globalPrint();

static void print(){
    std::cout << "Hello from main" << std::endl;
}

int main()
{
    std::cout << s_var << std::endl;
    std::cout << var << std::endl;
    print();
    globalPrint();
}