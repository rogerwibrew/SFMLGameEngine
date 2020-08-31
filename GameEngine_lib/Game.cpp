//
// Created by roger on 26/08/2020.
//
#include "Game.h"

// Created by roger on 26/08/2020.
//
#include "Game.h"

Game::Game() :
        manager(window),
        window(sf::VideoMode(Globals::WINDOW_WIDTH, Globals::WINDOW_HEIGHT), "Game") {
    auto circle = new Entity(window);
    auto circleComponent = new CircleComponent(20.f, sf::Color::Red);
    circle->AddComponent(circleComponent);
    manager.addEntity(circle);
}


void Game::run() {
    while (window.isOpen()) {
        ProcessInput();
        Update();
        Render();
    }
}

void Game::ProcessInput() {
    sf::Event event;
    while (window.pollEvent(event)) {
        if (event.type == sf::Event::Closed)
            window.close();
    }
}

void Game::Update() {
    manager.Update();

}

void Game::Render() {
    window.clear();
    manager.Draw();
    window.display();
}
