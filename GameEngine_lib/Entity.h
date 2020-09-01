//
// Created by roger on 27/08/2020.
//

#ifndef GAMEENGINE_ENTITY_H
#define GAMEENGINE_ENTITY_H

#include <SFML/Graphics.hpp>
#include <vector>
#include "Component.h"
#include "CircleComponent.h"

class Entity : public sf::Transformable{
public:
    Entity(sf::RenderWindow &window);

    ~Entity();

    void Update();

    void Draw() const;

    template<typename T>
    void AddComponent(T component) {
        components.push_back(component);
    }
    std::vector<Component *> GetComponents();


private:
    sf::RenderWindow &window;
    std::vector<Component *> components;
};

#endif //GAMEENGINE_ENTITY_H
