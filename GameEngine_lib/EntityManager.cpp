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

void EntityManager::CleanUp() {
    for(auto &entity: entities){
        for(auto &component : entity->GetComponents()){
            delete component;
            std::cout << "Component Deleted" << std::endl;
        }
        delete entity;
        std::cout << "Entity Deleted" << std::endl;
    }
}
