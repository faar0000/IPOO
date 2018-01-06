#include <iostream>
#include <Game.h>

using namespace std;

int main( int argc, char *argv[] )
{

    Game *P = new Game(800,600,32,"asdasd");
    P->startGame();
    return 0;
}
