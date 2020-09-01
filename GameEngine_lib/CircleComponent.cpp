//
// Created by roger on 28/08/2020.
//

#include "CircleComponent.h"

void CircleComponent::Update() {

}

void CircleComponent::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    sf::Transformable transform = parent->getTransform();
    target.draw(circle, transform.getTransform());
}

void CircleComponent::DrawComponent(sf::RenderWindow& window) {
    sf::RenderStates states;
    draw(window, states);
}

CircleComponent::CircleComponent(Entity *parent, float rad, sf::Color color) : Component(parent) {
    circle.setRadius(rad);
    circle.setFillColor(color);
}

