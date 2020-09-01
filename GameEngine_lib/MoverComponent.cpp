//
// Created by roger on 31/08/2020.
//

#include "MoverComponent.h"

void MoverComponent::Update() {
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Right)){
        parent->move(-1.f, 0.f);
    }
}

void MoverComponent::DrawComponent(sf::RenderWindow &window) {

}

MoverComponent::MoverComponent(Entity *parent) : Component(parent) {

}
