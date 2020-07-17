#ifndef ENEMY_H
#define ENEMY_H

#include<SFML/Graphics.hpp>

class Enemy
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
    Enemy(sf::Texture* texture,float pos_x, float pos_y);
    virtual ~Enemy();
    const sf::FloatRect getBounds() const;
    const int& getPoints() const;
    const int& getDamage() const;
    void update();
    void render(sf::RenderTarget* target);
};

#endif // ENEMY_H
