#ifndef ENEMIGO_H
#define ENEMIGO_H
#include <SDL/SDL.h>
#include <SDL/SDL_IMAGE.h>
#include <SDL/SDL_MIXER.h>



class enemigo
{
    public:
        enemigo(SDL_Surface * screen);

        SDL_Rect dest2;
        SDL_Surface * fantasma;
        SDL_Surface * screen;

        void chase(); //(persecución)
        void frightened(); //(Asustado)
        virtual ~enemigo();
    protected:
    private:
};

#endif // ENEMIGO_H
