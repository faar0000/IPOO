#include "enemigo.h"
#include <SDL/SDL.h>
#include <SDL/SDL_IMAGE.h>
#include <SDL/SDL_MIXER.h>

enemigo::enemigo(SDL_Surface * screen)
{
    this->screen = screen;
    fantasma = IMG_Load("enemigo.bmp");
    SDL_BlitSurface(fantasma, NULL,screen,&dest2);
}

void enemigo::chase(){

}

void frightened(){

}
enemigo::~enemigo()
{
    //dtor
}
