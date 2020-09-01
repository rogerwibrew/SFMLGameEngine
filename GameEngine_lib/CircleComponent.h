//
// Created by roger on 28/08/2020.
//

#ifndef GAMEENGINE_CIRCLECOMPONENT_H
#define GAMEENGINE_CIRCLECOMPONENT_H

#include "Component.h"
#include "Entity.h"
#include <SFML/Graphics.hpp>


class CircleComponent : public Component, sf::Drawable {
public:
    CircleComponent(Entity *parent, float rad, sf::Color color);

    void Update() override;

    void DrawComponent(sf::RenderWindow &window) override;

private:
    sf::CircleShape circle;

    void draw(sf::RenderTarget &target, sf::RenderStates states) const override;
};

#endif //GAMEENGINE_CIRCLECOMPONENT_H
