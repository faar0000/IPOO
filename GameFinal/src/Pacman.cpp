#include "Pacman.h"

Pacman::Pacman()
{

    currentX = 40;
    currentY = 40;
    width = 0;
    height = 0;
    puntaje=0;

    posX_mapa = 1;
    posY_mapa = 1;

    //ctor
}

void Pacman::load_sprite(string path){
    const char * c = path.c_str();

    sprite_resource = IMG_Load(c);

    sprite_resourceUP = IMG_Load("pacmanU.bmp");
    sprite_resourceDOWN = IMG_Load("pacmanD.bmp");
    sprite_resourceRIGHT = IMG_Load("pacmanR.bmp");
    sprite_resourceLEFT = IMG_Load("pacmanL.bmp");
    SDL_SetColorKey(sprite_resource, SDL_SRCCOLORKEY|SDL_RLEACCEL, SDL_MapRGB(sprite_resource->format,255,0,255));
    SDL_SetColorKey(sprite_resourceUP, SDL_SRCCOLORKEY|SDL_RLEACCEL, SDL_MapRGB(sprite_resourceUP->format,255,0,255));
    SDL_SetColorKey(sprite_resourceDOWN, SDL_SRCCOLORKEY|SDL_RLEACCEL, SDL_MapRGB(sprite_resourceDOWN->format,255,0,255));
    SDL_SetColorKey(sprite_resourceRIGHT, SDL_SRCCOLORKEY|SDL_RLEACCEL, SDL_MapRGB(sprite_resourceRIGHT->format,255,0,255));
    SDL_SetColorKey(sprite_resourceLEFT, SDL_SRCCOLORKEY|SDL_RLEACCEL, SDL_MapRGB(sprite_resourceLEFT->format,255,0,255));





    width = sprite_resource->w;
    height = sprite_resource->h;

    //cargando sprite
    step = width;
    sprite.w = width;
    sprite.h = height;
    sprite.x = currentX;
    sprite.y = currentY;
    //end;

    cout<<"Pacman LOADED : "<<sprite.w<<" "<<sprite.h<<" "<<sprite.x<<" "<<sprite.y<<endl;

}

Pacman::~Pacman()
{
    //dtor
}
