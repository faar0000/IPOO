#include<stdio.h> //libreria basica para funciones y demas
#include <allegro.h>  //libreria de allegro
//#include <allegro_image.h>//libreria de imagenes para allegro

// valor de las columnas y filas para el tamano del mapa
int maxfilas =31;
int maxcolu =21;



char mapa[maxfilas][maxcol]={
  "XXXXXXXXXXXXXXXXXXXXXXXXXXXXX",
  "X           XXXXX           X",
  "X XXX XXXXX XXXXX XXXXX XXX X",
  "X XXX XXXXX XXXXX XXXXX XXX X",
  "X                           X",
  "X XXX XX XXXXXXXXXXX XX XXX X",
  "X     XX     XXX     XX     X",
  "X XXX XXXXXX XXX XXXXXX XXX X",
  "X XXX XX             XX XXX X",
  "      XX XXXXXXXXXXX XX      ",
  "X XXX XX XXXXXXXXXXX XX XXX X",
  "X XXX XX             XX XXX X",
  "X XXX XXXXXX XXX XXXXXX XXX X",
  "X     XX     XXX     XX     X",
  "X XXX XX XXXXXXXXXXX XX XXX X",
  "X XXX                   XXX X",
  "X XXX XXXX XXXXXXXX XXX XXX X",
  "X XXX XXXX          XXX XXX X",
  "X          XXXXXXXX         X",
  "XXXXXXXXXXXXXXXXXXXXXXXXXXXXX",
};
ALLEGRO_BITMAP *roca;
void dibujar_mapa(){
    int fila,colu;

    for(fila=0;fila<maxfilas;fila++){
        for(colu=0;colu<maxcol;colu++){
            if(mapa[fila][colu]=='X'){
                al_draw(roca,colu*30,fila*30,0);//el cero  es el angulo de la imagen
            }

        }

    }

}

void main(){
    //iniciar allegro
    al_init();
    //cargara imagenes
    al_init_image_addon();

    //crea la pantalla
    display=al_create_display(880, 600);
    //le da color a la pantalla
    al_clear_to_color(al_map_rgb(0, 0, 0));
    //es un refresh
   // al_flip_display();
    // le damos valor a "roca" y cargamos la imagen
    roca=al_load_beatmap("roca.bmp");
    //llamamos a la funcion dibujar mapa
    dibujar_mapa()

    return 0;

}
