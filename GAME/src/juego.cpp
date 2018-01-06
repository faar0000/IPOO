#include "juego.h"
#include <mapa.h>
#include <SDL/SDL.h>
#include <SDL/SDL_IMAGE.h>
#include <SDL/SDL_MIXER.h>


juego::juego()
{
    //ctor
}

void juego::iniciar_sdl(){
    SDL_Init(SDL_INIT_VIDEO| SDL_INIT_AUDIO);
    freopen ("CON", "w", stdout); // Redirige stdout
    freopen ("CON", "w", stderr); // Redirige stder

    SDL_WM_SetCaption("Pacman by Alejandro", NULL);
}

void juego::establecer_modo_de_video(){
    screen = SDL_SetVideoMode(800,600,32,SDL_SWSURFACE);

}


void juego::imagenes(){
        SDL_SetColorKey(imagen, SDL_SRCCOLORKEY|SDL_RLEACCEL, SDL_MapRGB(imagen->format,255,0,255));
        SDL_SetColorKey(imagen2, SDL_SRCCOLORKEY|SDL_RLEACCEL, SDL_MapRGB(imagen2->format,255,0,255));
        SDL_SetColorKey(imagen3, SDL_SRCCOLORKEY|SDL_RLEACCEL, SDL_MapRGB(imagen3->format,255,0,255));
        SDL_SetColorKey(imagen4, SDL_SRCCOLORKEY|SDL_RLEACCEL, SDL_MapRGB(imagen4->format,255,0,255));
        SDL_SetColorKey(fantasma, SDL_SRCCOLORKEY|SDL_RLEACCEL, SDL_MapRGB(fantasma->format,255,0,255));
        SDL_SetColorKey(comida, SDL_SRCCOLORKEY|SDL_RLEACCEL, SDL_MapRGB(comida->format,255,0,255));

        SDL_Flip(screen);
}

void juego::leer_teclado(){
    while(true){
            atexit(SDL_Quit);


            SDL_FillRect(screen,0,SDL_MapRGB(screen ->format,0,0,0));

            if (tecla.key.keysym.sym == SDLK_UP){
                SDL_BlitSurface(imagen3, NULL, screen, &dest);
            }
            else if (tecla.key.keysym.sym == SDLK_DOWN){
                SDL_BlitSurface(imagen4, NULL, screen, &dest);
            }
            else if (tecla.key.keysym.sym == SDLK_LEFT){
                SDL_BlitSurface(imagen, NULL, screen, &dest);
            }
            else if (tecla.key.keysym.sym == SDLK_RIGHT){
                SDL_BlitSurface(imagen2, NULL, screen, &dest);
            }

    }
}
