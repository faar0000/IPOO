#ifndef PACMAN_H
#define PACMAN_H


#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL.h>
#include <time.h>
#include <SDL/SDL_IMAGE.h>
#include <SDL/SDL_MIXER.h>
#include <iostream>



using namespace std;

class Pacman
{
    public:

        SDL_Rect sprite;
        SDL_Surface * sprite_resource;

        SDL_Surface * sprite_resourceUP;
        SDL_Surface * sprite_resourceDOWN;
        SDL_Surface * sprite_resourceRIGHT;
        SDL_Surface * sprite_resourceLEFT;

        int step;

    public:
        int currentX;
        int currentY;
        int width;
        int height;
        int puntaje;

        int posX_mapa;
        int posY_mapa;


    public:
        Pacman();
        virtual ~Pacman();

    public:
        void load_sprite(string path);

    private:
};

#endif // PACMAN_H
