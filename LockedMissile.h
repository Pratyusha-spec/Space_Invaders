// LockedMissile.h
#pragma once
#include <SFML/Graphics.hpp>

class LockedMissile
{
private:
    sf::Sprite missileSprite;
    float speed;

public:
    LockedMissile(const sf::Vector2f& position);
    void update(const sf::Vector2f& targetPosition);
    void draw(sf::RenderWindow& window);
};
