#ifndef PACMAN_H
#define PACMAN_H
#include <SDL/SDL.h>
#include <SDL/SDL_IMAGE.h>
#include <SDL/SDL_MIXER.h>



class pacman
{
    public:
        pacman();
        dest.x = 350;
        dest.y = 250;
        void cargar_pacman();
        void mover_pacman();
        virtual ~pacman();
    protected:
    private:
};

#endif // PACMAN_H
