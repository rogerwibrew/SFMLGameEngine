//
// Created by roger on 28/08/2020.
//

#ifndef GAMEENGINE_ENTITYMANAGER_H
#define GAMEENGINE_ENTITYMANAGER_H


#include <vector>
#include "Entity.h"

class EntityManager {
public:
    EntityManager(sf::RenderWindow& window);
    Entity* addEntity(Entity* entity);
    void Update();
    void Draw();


private:
    std::vector<Entity*> entities;
    sf::RenderWindow& window;

};


#endif //GAMEENGINE_ENTITYMANAGER_H
