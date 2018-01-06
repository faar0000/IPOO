#ifndef MAPA_H
#define MAPA_H
#include <SDL/SDL_IMAGE.h>
#include <SDL/SDL_MIXER.h>
#include <SDL/SDL.h>
#include <SDL/SDL_IMAGE.h>
#include <SDL/SDL_MIXER.h>


class mapa
{
    public:
        mapa();
        SDL_Rect dest1;
        SDL_Rect dest3;
        SDL_Surface * roca;
        SDL_Surface * comida;
        void cargar_roca();
        void cargar_audio();
        void cargar_comida();
        void hacer_comida();
        void hacer_rocas();
        virtual ~mapa();
    protected:
    private:
};

#endif // MAPA_H
