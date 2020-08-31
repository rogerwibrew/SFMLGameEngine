//
// Created by roger on 28/08/2020.
//

#include "EntityManager.h"

EntityManager::EntityManager(sf::RenderWindow &window) :
        window(window) {

}

Entity *EntityManager::addEntity(Entity *entity) {
    entities.push_back(entity);
    return entity;
}

void EntityManager::Update() {
    for (auto &entity : entities) {
        entity->Update();
    }

}

void EntityManager::Draw() {
    for (auto &entity : entities)
        entity->Draw();
}
