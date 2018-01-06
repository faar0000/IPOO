#ifndef JUEGO_H
#define JUEdGO_H
#include <stdlib.h>
#include <mapa.h>
#include <SDL/SDL.h>
#include <SDL/SDL_IMAGE.h>
#include <SDL/SDL_MIXER.h>


class juego
{
    public:
        juego();
        SDL_Surface * screen;
        SDL_Surface * surface;
        SDL_Surface * imagen;
        SDL_Surface * imagen2;
        SDL_Surface * imagen3;
        SDL_Surface * imagen4;
        SDL_Surface * comida;
        SDL_Surface * fantasma;
        SDL_Event tecla;
        SDL_Rect dest;
        SDL_Rect dest2;
        void imagenes();
        void iniciar_sdl();
        void establecer_modo_de_video();
        void leer_teclado();
    protected:
    private:
};

#endif // JUEGO_H
