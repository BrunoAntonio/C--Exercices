#include <iostream>
#include <array>

int main()
{

    int array[5] = {1, 2, 3, 4, 5};

    int count = sizeof(array) / sizeof(int);

    int array1[5];
    array1[0] = 0;
    array1[4] = 5;

    int *ptr = array1;

    for (int i = 0; i < 5; i++)
    {
        std::cout << array[i] << std::endl;
    }

    *(ptr + 2) = 10;
    std::cout << array1[2] << std::endl;

    int *anotherArray = new int[5]; // array armazenado no heap
                                    // count não funciona bem no heap porque retorna o tamanho do ponteiro

    for (int i = 0; i < 5; i++)
    {
        anotherArray[i] = i;
    }
    delete[] anotherArray;

    std::array<int, 5> array2; // array no c++ 11
    array2.size();
}