#include <iostream>
#include <string>

struct Vector2
{
    float x, y;
};

class String
{
private:
    char *m_Buffer;
    unsigned int m_Size;

public:
    String(const char *string)
    {
        m_Size = strlen(string);
        m_Buffer = new char[m_Size + 1];
        memcpy(m_Buffer, string, m_Size + 1);
    }

    String(const String &other)
        : m_Size(other.m_Size)
    {
        std::cout << "Copied string" << std::endl;

        m_Buffer = new char[m_Size + 1];
        memcpy(m_Buffer, other.m_Buffer, m_Size + 1);
    }

    ~String()
    {
        delete[] m_Buffer;
    }

    char &operator[](unsigned int index)
    {
        return m_Buffer[index];
    }

    friend std::ostream &operator<<(std::ostream &stream, const String &string);
};

std::ostream &operator<<(std::ostream &stream, const String &string)
{
    stream << string.m_Buffer;
    return stream;
}

void PrintString(const String &string)
{
    std::cout << string << std::endl;
}

int main()
{
    String string = "Bruno";
    String second = "Bruno António";

    second[2] = 'a';

    PrintString(string);
    PrintString(second);

    std::codecvt;
    Vector2 *a = new Vector2();
    Vector2 *b = a;
    b->x = 2;
}