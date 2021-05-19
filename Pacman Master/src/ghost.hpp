#pragma once

#include "Entity.hpp"
#include "map.hpp"
#include <SDL2/SDL_mixer.h>

class Ghost
    : public Entity
{
private:

    int dir;
    

public:
    Ghost();
    bool dead;
    Ghost(std::pair<int,int> spawnPos);
    void move(Map &m, SDL_Rect &textureRect, int &animstartframe);

    void animate(SDL_Rect &textureRect, int direction, int &animstartframe, Map &m);
    void animate2(SDL_Rect &textureRect, int direction, int &animstartframe, Map &m);
    void setDead(bool d);
    bool isDead();
    void reset(Map &m);
};

