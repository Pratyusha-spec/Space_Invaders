// FrostBeam.h
#pragma once
#include <SFML/Graphics.hpp>

class FrostBeam
{
private:
    sf::RectangleShape beamShape;

public:
    FrostBeam(const sf::Vector2f& position);
    void update();
    void draw(sf::RenderWindow& window);
};
