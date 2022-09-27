#include <iostream>

class Player
{
public: // class -> privada por defeito
    int x, y;
    int speed;

    void move(int xa, int ya)
    {
        x += xa * speed;
        y += ya * speed;
    }
};

struct Player1
{
    // struct -> publica por defeito
    int x, y;
    int speed;

    void move(int xa, int ya)
    {
        x += xa * speed;
        y += ya * speed;
    }
};

int main()
{
    Player player;
    player.speed = 5;
    player.x = 1;
    player.y = 1;
    player.move(1, 2);

    Player1 player1;
    player1.speed = 2;
    player1.x = 1;
    player1.y = 1;
    player1.move(1, 1);

    std::cout << player.x << std::endl;
    std::cout << player.y << std::endl;

    std::cout << player1.x << std::endl;
    std::cout << player1.y << std::endl;
}