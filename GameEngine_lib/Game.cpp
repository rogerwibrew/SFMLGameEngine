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
    auto circleComponent = new CircleComponent(circle,50.f,sf::Color::Blue);
    circle->setPosition(sf::Vector2f(50.f, 50.f));
    sf::Vector2<float> position = sf::Vector2<float>(50.f, 50.f);
    circle->AddComponent(circleComponent);
    auto moverComponent = new MoverComponent(circle);
    circle->AddComponent(moverComponent);
    manager.addEntity(circle);
    // TODO Add moverComponent
    // TODO Use smart pointers
}

Game::~Game() {
    manager.CleanUp();
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