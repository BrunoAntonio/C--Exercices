#include <iostream>
#include <cstring>

int main()
{
    // ponteiro -> valor inteiro que armazena o endereço de memoria
    void *pointer = 0; // zero -> null (endereço de memoria null no stack)

    int var = 8;

    int *varMemoryAddress = &var; // o tipo não é importante para aceder ao endereço de memoria no stack
    *varMemoryAddress = 10;       // aceder à variavel neste endereço no stack e mudar valor da variavel para 10

    char *buffer = new char[8]; // (char tem 1 byte -> alocar 8 bytes de memoria no heap
    memset(buffer, 0, 8);
    char **pointerToBufferPointer = &buffer; // endereço de memoria do ponteiro buffer
    delete[] buffer;                         // apagar

    std::cout << varMemoryAddress << std::endl;
    std::cout << var << std::endl;
    std::cout << pointerToBufferPointer << std::endl;
}