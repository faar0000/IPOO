#include "mapa.h"
#include <pacman.h>
#include <enemigo.h>
#include <SDL/SDL.h>
#include <SDL/SDL_IMAGE.h>
#include <SDL/SDL_MIXER.h>


mapa::mapa()
{

}
void mapa::cargar_roca(){
    roca = IMG_Load("roca.bmp");
}

void mapa::cargar_audio(){
    Mix_Music*sonido;
    Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT,2,1024)
    sonido = Mix_LoadMUS("sonido.mp3");
    Mix_PlayMusic(sonido,-1);
}

void mapa::cargar:comida(){
    comida=IMG_Load("comida.bmp");
}

void mapa::hacer_comida(){
    int r,t;
    for (r=1;r<10;r++){
        SDL_BlitSurface(comida, NULL,screen,&dest3);
        dest3.y=dest3.y+100;
        for (t=r;t<10;t++){
            SDL_BlitSurface(comida, NULL,screen,&dest3);
            dest3.x= dest3.x +100;
            }
    }
}
void mapa::hacer_rocas(){
    }
        int e=32;
        for (int i=0;i<26;i++){
            SDL_BlitSurface(roca, NULL,screen,&dest1);
            dest1.x = e*i;
            dest1.y = 0;
        }

        for (int i=0;i<26;i++){
            SDL_BlitSurface(roca, NULL,screen,&dest1);
            dest1.x = e*i;
            dest1.y = 568;
        }


        for (int i=0;i<19;i++){
            dest1.x = 0;
            dest1.y = e*i;
            SDL_BlitSurface(roca, NULL,screen,&dest1);
        }


        for (int i=0;i<18;i++){
            dest1.x = 768;
            dest1.y = e*i;SDL_SetColorKey(imagen, SDL_SRCCOLORKEY|SDL_RLEACCEL, SDL_MapRGB(imagen->format,255,0,255));
            SDL_BlitSurface(roca, NULL,screen,&dest1);
        }
}
mapa::~mapa()
{
    //dtor
}
