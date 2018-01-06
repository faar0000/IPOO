#ifndef ENEMIGO_H
#define ENEMIGO_H
#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL.h>
#include <SDL/SDL_IMAGE.h>
class enemigo
{
    public:
        void load_enemigo();
        SDL_Rect enemigoA;
        SDL_Surface * enemigo_resource;
        enemigo();
        virtual ~enemigo();
    protected:
    private:
};

#endif // ENEMIGO_H
