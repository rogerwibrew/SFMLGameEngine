//
// Created by roger on 28/08/2020.
//

#include "Entity.h"

Entity::Entity(sf::RenderWindow& window):
window(window)
{

}

Entity::~Entity() {

}

void Entity::Update() {
    for(auto& component : components){
        component->Update();
    }
}

void Entity::Draw() const {
    for(auto& component : components)
        component->DrawComponent(window);
}

std::vector<Component *> Entity::GetComponents() {
    return components;
}

const sf::Transformable &Entity::getTransform() const {
    return transform;
}

void Entity::setTransform(const sf::Vector2f position) {
    Entity::transform.setPosition(position);
}
