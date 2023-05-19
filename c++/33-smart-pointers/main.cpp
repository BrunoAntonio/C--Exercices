#include <iostream>
#include <string>
#include <memory>

class Entity
{

public:
    Entity()
    {
        std::cout << "created!" << std::endl;
    }

    ~Entity()
    {
        std::cout << "destroyed!" << std::endl;
    }

    void Print()
    {
    }
};

int main()
{

    {
        std::shared_ptr<Entity> e0;
        // std::weak_ptr<Entity>e0; // Não aumenta a contagem de referências (quando se aponta um onteiro para outro não aumenta a contagem de referencias, ao contrario do shared pointer)

        {
            // std::unique_ptr<Entity> entity(new Entity);
            std::unique_ptr<Entity> entity = std::make_unique<Entity>(); // destruido quando sai do scope
            entity->Print();

            std::shared_ptr<Entity> sharedEntity = std::make_shared<Entity>(); // valido fora do scope porque ainda existe o outro fora deste scope, só é apagado da memora quando não há mais referências de memoria
            e0 = sharedEntity;
        }
    }

    std::cin.get();
}