#ifndef BONUS_H
#define BONUS_H

#include<SFML/Graphics.hpp>

class bonus
{
private:
    unsigned pointCount;
    sf::Sprite shape;
    int type;
    float speed;
    int hp;
    int hpMax;
    int damage;
    int points;
    void initVariables();


public:
    bonus(sf::Texture* texture,float pos_x, float pos_y);
    virtual ~bonus();
    const sf::FloatRect getBounds() const;
    const int& getPoints() const;
    const int& getDamage() const;
    void update();
    void render(sf::RenderTarget* target);
};

#endif // BONUS_H
