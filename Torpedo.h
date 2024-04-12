// Torpedo.h
#pragma once
#include <SFML/Graphics.hpp>

class Torpedo
{
private:
    sf::Sprite torpedoSprite;
    float speed;

public:
    Torpedo(const sf::Vector2f& position);
    void update();
    void draw(sf::RenderWindow& window);
};
