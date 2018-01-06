#ifndef GAME_H
#define GAME_H

#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL.h>
#include <time.h>
#include <SDL/SDL_IMAGE.h>
#include <SDL/SDL_MIXER.h>
#include <iostream>
#include <Pacman.h>
#include <time.h>
//#include <enemigo.h>

using namespace std;

class Game
{

    public:

    SDL_Rect enemigo;
    SDL_Surface * enemigo_resource;

    SDL_Rect eraser;
    SDL_Surface * eraser_resource;

    SDL_Rect comida;
    SDL_Surface * comida_resource;

    SDL_Rect roca;
    SDL_Surface * roca_resource;




    int mapa[20][15];

    private:

        //screen settings
        SDL_Surface * screen;
        int screenWidth;
        int screenHeight;
        int dimPixel;
        string title;

        //pacman player
        Pacman* player;


    public:

        void setScreenWidth(int w);
        void setScreenHeight(int h);
        void setDimPixel(int dP);
        int getScreenWidth();
        int getScreenHeight();
        int getDimPixel();
        void setTitle(string t);
        void getTitle();





    public:

        Game(int w, int h, int dP, string title);
        Game();

        virtual ~Game();

    public:
        void startGame();

    private:

        void init_sdl();
        void load_screen();
        void show_mapa();
        void PrintKeyInfo( SDL_KeyboardEvent *key );
        void enemigo_move();
        void load_eraser();
        void load_comida();
        void load_roca();
        void load_enemigo();
        int can_move(int x,int y);
};

#endif // GAME_H
