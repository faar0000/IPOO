#include "pacman.h"
#include <SDL/SDL.h>
#include <SDL/SDL_IMAGE.h>
#include <SDL/SDL_MIXER.h>


pacman::pacman()
{
    imagen = IMG_Load("pacman1.bmp");
    imagen2= IMG_Load("pacman2.bmp");
    imagen3= IMG_Load("pacman3.bmp");
    imagen4= IMG_Load("pacman4.bmp");
}
void pacman::mover_pacman(){

        while (SDL_PollEvent(&tecla)){
            if (tecla.type == SDL_QUIT){ exit(0);}
            if (tecla.type == SDL_KEYDOWN){
                if (tecla.key.keysym.sym == SDLK_ESCAPE){
                    exit(0);
                }
                if (tecla.key.keysym.sym == SDLK_UP){
                        if(dest.y>25)
                        {
                        dest.y -= 15;
                        }
                }
                 if (tecla.key.keysym.sym == SDLK_DOWN){
                    dest.y += 15;
                }
                if (tecla.key.keysym.sym == SDLK_LEFT){
                    dest.x -= 15;
                }
                if (tecla.key.keysym.sym == SDLK_RIGHT){
                    dest.x += 15;
                }
            }
        }


}

pacman::~pacman()
{
    //dtor
}
