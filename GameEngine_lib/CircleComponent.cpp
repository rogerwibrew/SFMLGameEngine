//
// Created by roger on 28/08/2020.
//

#include "CircleComponent.h"

void CircleComponent::Update() {

}

void CircleComponent::draw(sf::RenderTarget &target, sf::RenderStates states) const {

    target.draw(circle);
}

void CircleComponent::DrawComponent(sf::RenderWindow& window) {
    sf::RenderStates states;
    draw(window, states);
}

CircleComponent::CircleComponent(float rad, sf::Color color)
{
    circle.setRadius(rad);
    circle.setFillColor(color);
}

