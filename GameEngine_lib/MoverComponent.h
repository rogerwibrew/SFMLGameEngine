//
// Created by roger on 31/08/2020.
//

#ifndef GAMEENGINE_MOVERCOMPONENT_H
#define GAMEENGINE_MOVERCOMPONENT_H

#include "Component.h"
#include "Entity.h"

class MoverComponent : public Component {
public:

    MoverComponent(Entity *parent);

    void Update() override;

    void DrawComponent(sf::RenderWindow &window) override;
};


#endif //GAMEENGINE_MOVERCOMPONENT_H
