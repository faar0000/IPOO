#include "juego.h"

int main(int argc, char *argv[]){



    iniciar_sdl();
    establecer_modo_de_video();
    choque();
    SDL_WM_SetCaption("Pacman by Alejandro", NULL);
    SDL_FreeSurface(imagen);
    return 0;

}
