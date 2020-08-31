//
// Created by roger on 27/08/2020.
//

#ifndef GAMEENGINE_COMPONENT_H
#define GAMEENGINE_COMPONENT_H

#include <SFML/Graphics.hpp>

class Component {

public:
    virtual void Update() = 0;

    virtual void DrawComponent(sf::RenderWindow& window) = 0;
};
#endif //GAMEENGINE_COMPONENT_H
