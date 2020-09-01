//
// Created by roger on 26/08/2020.
//

#ifndef GAMEENGINE_GAME_H
#define GAMEENGINE_GAME_H

#include <memory>
#include <SFML/Graphics.hpp>
#include "EntityManager.h"
#include "Globals.h"
#include "Entity.h"
#include "Component.h"
#include "CircleComponent.h"


class Game {
public:
    Game();
    ~Game();
    void run();
    void ProcessInput();
    void Update();
    void Render();

private:
    EntityManager manager;
    sf::RenderWindow window;
    sf::CircleShape shape;
};


#endif //GAMEENGINE_GAME_H
