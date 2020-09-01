//
// Created by roger on 27/08/2020.
//

#ifndef GAMEENGINE_ENTITY_H
#define GAMEENGINE_ENTITY_H

#include <SFML/Graphics.hpp>
#include <vector>
#include "Component.h"
#include "CircleComponent.h"

class Entity {
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

    const sf::Transformable &getTransform() const;

    void setTransform(const sf::Vector2f position);


private:
    sf::RenderWindow &window;
    std::vector<Component *> components;
    sf::Transformable transform;
};


#endif //GAMEENGINE_ENTITY_H
