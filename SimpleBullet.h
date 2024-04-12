// SimpleBullet.h
#pragma once
#include <SFML/Graphics.hpp>

class SimpleBullet
{
private:
    sf::Sprite bulletSprite;
    float speed;

public:
    SimpleBullet(const sf::Vector2f& position);
    void update();
    void draw(sf::RenderWindow& window);
};
