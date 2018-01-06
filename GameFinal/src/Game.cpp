
#include "Game.h"
#include "fstream"


Game::Game(int w, int h, int dP, string title)
{
    screenWidth = w;
    screenHeight = h;
    dimPixel = dP;
    this->title = title;

    init_sdl();
    load_music();
    load_eraser();
    load_comida();
    load_enemigo();
    load_roca();
    enemigo_move();
    cout<<"Press M to show score"<<endl;

}


Game::Game()
{
    title = "MyGame";
    screenWidth = 800;
    screenHeight = 600;
    dimPixel = 32;
    init_sdl();
    load_music();
    load_eraser();
    load_comida();
    load_roca();
    load_enemigo();
    enemigo_move();

}


void Game::load_eraser(){


    eraser_resource = IMG_Load("eraser_white.bmp");


    //cargando sprite
    //step = width;
    eraser.w = 40;
    eraser.h = 40;

}

void Game::load_roca(){
    roca_resource = IMG_Load("roca.bmp");
    roca.w = 40;
    roca.h = 40;
}

void Game::load_comida(){
    comida_resource = IMG_Load("comida.bmp");
    comida.w = 40;
    comida.h = 40;
}

void Game::load_enemigo(){
    enemigo_resource = IMG_Load("enemigo.bmp");
    enemigo.w = 40;
    enemigo.h = 40;
}

void enemigo_move(){
for (int i=0,i<4,i++)
    {
        int num=rand()%4
        int num1=rand()%4
        int num2=rand()%4
        int num3=rand()%4
        cout<<num<<endl;
        cout<<num1<<endl;
        cout<<num2<<endl;
        cout<<num3<<endl;
    }
void Game::startGame(){

    cout<<"INIT_GAME"<<endl;
    load_screen();
    const char * c = title.c_str();
    SDL_WM_SetCaption(c, NULL);


    player = new Pacman();
    player->load_sprite("pacmanR.bmp");



    eraser.x = player->currentX;
    eraser.y = player->currentY;

    SDL_Event event;
    int quit = 0;

    //set background color RGB
    SDL_FillRect(screen,0,SDL_MapRGB(screen ->format,255,255,255));




    show_mapa();
    cout <<"Posicion inicial: "<<player->posX_mapa<<" "<< player->posY_mapa<<endl;
    int evaluate;
    int num=rand()%4;

    while( !quit ){


        SDL_BlitSurface(player->sprite_resource, NULL,this->screen,&player->sprite);

        SDL_Flip(screen);

            /* Poll for events */
            while( SDL_PollEvent( &event ) ){



                    eraser.x = player->sprite.x;
                    eraser.y = player->sprite.y;

                switch( event.type ){

                    /* Keyboard event */
                    /* Pass the event data onto PrintKeyInfo() */

                    case SDL_KEYDOWN:


                        if (event.key.keysym.sym == SDLK_ESCAPE){
                            exit(0);
                        }


                        if (event.key.keysym.sym == SDLK_UP){
                            int y = player->posY_mapa-1;
                            int x = player->posX_mapa;
                            evaluate = can_move(x,y);
                            if (evaluate == 1 || evaluate == 3){
                                if(evaluate == 1){
                                    player->puntaje+=1;
                                    mapa[x][y]=0;
                                }
                                SDL_BlitSurface(eraser_resource, NULL,this->screen,&eraser);
                                player->sprite_resource = player->sprite_resourceUP;
                                player->sprite.y -= player->step;
                                player->posY_mapa-=1;
                            }
                            if (evaluate == -1){
                                cout<<"GAME OVER"<<endl;
                                exit(0);
                            }

                              //cout<<"^";
                        }
                        if (event.key.keysym.sym == SDLK_DOWN){
                                int y = player->posY_mapa+1;
                                int x = player->posX_mapa;
                                evaluate = can_move(x,y);
                            if (evaluate == 1 || evaluate == 3){
                                    if(evaluate == 1){
                                    player->puntaje+=1;
                                    mapa[x][y]=0;

                                }
                                SDL_BlitSurface(eraser_resource, NULL,this->screen,&eraser);

                                player->sprite_resource = player->sprite_resourceDOWN;
                                player->sprite.y += player->step;
                                player->posY_mapa+=1;
                            }
                        }
                        if (event.key.keysym.sym == SDLK_LEFT){
                                int y = player->posY_mapa;
                                int x = player->posX_mapa-1;
                                evaluate = can_move(x,y);

                                if (evaluate == 1 || evaluate == 3){
                                        if(evaluate == 1){
                                    player->puntaje+=1;
                                    mapa[x][y]=0;
                                }
                                    SDL_BlitSurface(eraser_resource, NULL,this->screen,&eraser);

                                    player->sprite_resource = player->sprite_resourceLEFT;
                                    player->sprite.x -= player->step;
                                    player->posX_mapa-=1;
                                }
                        }
                        if (event.key.keysym.sym == SDLK_RIGHT){
                                int y = player->posY_mapa;
                                int x = player->posX_mapa+1;
                                evaluate = can_move(x,y);

                            if (evaluate == 1 || evaluate == 3){
                                    if(evaluate == 1){
                                    player->puntaje+=1;
                                    mapa[x][y]=0;
                                }
                                SDL_BlitSurface(eraser_resource, NULL,this->screen,&eraser);

                                player->sprite_resource = player->sprite_resourceRIGHT;
                                player->sprite.x += player->step;
                                player->posX_mapa+=1;
                            }
                        }
                        if(event.key.keysym.sym == SDLK_m){
                            cout<<"Score: "<<player->puntaje<<endl;
                        }

                    case SDL_KEYUP:


                        //PrintKeyInfo( &event.key );
                        break;

                    /* SDL_QUIT event (window close) */
                    case SDL_QUIT:
                        quit = 1;
                        break;

                    default:
                        break;
                }
                //cout<<"PACMAN POSITION : ("<<player->posX_mapa <<","<< player->posY_mapa<<")"<<endl;

            }

        }


        /* Clean up */

        SDL_Quit();
        exit( 0 );
    }


void Game::show_mapa()
{

   {
  int x, y;
  ifstream in("mapa.txt");

  if (!in) {
    cout << "Cannot open file.\n";
    return;
  }

  for (y = 0; y < 15; y++) {
    for (x = 0; x < 20; x++) {
      in >> mapa[x][y];
            if (mapa[x][y]==1){
                roca.x=x*40;
                roca.y=y*40;
                SDL_BlitSurface(roca_resource, NULL,this->screen,&roca);
            }
            else if (mapa[x][y]==2){
                comida.x=x*40;
                comida.y=y*40;
                SDL_SetColorKey(comida_resource, SDL_SRCCOLORKEY|SDL_RLEACCEL, SDL_MapRGB(comida_resource->format,255,0,255));
                SDL_BlitSurface(comida_resource, NULL,this->screen,&comida);

            }
            else if(mapa[x][y]==3){
                enemigo.x=x*40;
                enemigo.y=y*40;
                SDL_SetColorKey(enemigo_resource, SDL_SRCCOLORKEY|SDL_RLEACCEL, SDL_MapRGB(enemigo_resource->format,255,0,255));
                SDL_BlitSurface(enemigo_resource, NULL,this->screen,&enemigo);
            }
            else if(mapa [x][y]==0){
                SDL_BlitSurface(eraser_resource, NULL,this->screen,&eraser);
            }
        SDL_Flip(screen);

    }
    cout<<endl;
  }

  in.close();
}

}

int Game::can_move(int x,int y){
    cout<<"Que haces"<<endl;
    if (mapa[x][y]==3){
            return -1;
    }

    if (mapa[x][y]==1){
            return 0;
    }

    if (mapa[x][y]==2){
            return 1;
    }

    if (mapa[x][y]==0){
        return 3;
    }
}

void Game::init_sdl(){

    freopen ("CON", "w", stdout); // Redirige stdout
     freopen ("CON", "w", stderr); // Redirige stderr

    cout<<"START_init_sdl"<<endl;

    SDL_Init(SDL_INIT_VIDEO| SDL_INIT_AUDIO);

    cout<<"END_init_sdl"<<endl;

}



void Game::load_screen()
{
    cout<<"START_load_screen"<<endl;
    screen = SDL_SetVideoMode(screenWidth,screenHeight,dimPixel,SDL_SWSURFACE);
    cout<<"END_load_screen"<<endl;
}

void Game::PrintKeyInfo( SDL_KeyboardEvent *key ){
        /* Is it a release or a press? */
        if( key->type == SDL_KEYUP )
            printf( "Release:- " );
        else
            printf( "Press:- " );

        printf( "Scancode: 0x%02X", key->keysym.scancode );
        /* Print the name of the key */
        printf( ", Name: %s", SDL_GetKeyName( key->keysym.sym ) );
        if( key->type == SDL_KEYDOWN ){
            printf(", Unicode: " );
            if( key->keysym.unicode < 0x80 && key->keysym.unicode > 0 ){
                printf( "%c (0x%04X)", (char)key->keysym.unicode,
                        key->keysym.unicode );
            }
            else{
                printf( "? (0x%04X)", key->keysym.unicode );
            }
        }
        printf( "\n" );
    }




Game::~Game()
{
    //dtor
}
