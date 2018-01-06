#include "enemigo.h"

enemigo::enemigo()
{
   load_enemigo();
}

void enemigo::load_enemigo(){
    enemigo_resource = IMG_Load("enemigo.bmp");
    enemigoA.w = 40;
    enemigoA.h = 40;
}
enemigo::~enemigo()
{

}
