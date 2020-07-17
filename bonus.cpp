#include "bonus.h"

void bonus::initVariables()
{
    this->pointCount = rand() % 1 + 2;
    this->type		= 0;
    this->speed		= static_cast<float>(this->pointCount/3);
    this->hpMax		= static_cast<int>(this->pointCount);
    this->hp		= this->hpMax;
    this->damage	= this->pointCount;
    this->points	= this->pointCount;
}

bonus::bonus(sf::Texture* texture,float pos_x, float pos_y)
{
    this->shape.setTexture(*texture);
    this->shape.scale(0.1f,0.1f);
    this->initVariables();


    this->shape.setPosition(pos_x, pos_y);
}

bonus::~bonus()
{

}


const sf::FloatRect bonus::getBounds() const
{
    return this->shape.getGlobalBounds();
}

const int & bonus::getPoints() const
{
    return this->points;
}

const int & bonus::getDamage() const
{
    return this->damage;
}


void bonus::update()
{
    this->shape.move(0.f, this->speed);
}

void bonus::render(sf::RenderTarget * target)
{
    target->draw(this->shape);
}
