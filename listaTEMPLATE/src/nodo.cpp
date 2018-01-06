#include "nodo.h"

nodo::nodo()
{
    valor=0;
    posicion=0;
}

nodo::setPosicion(int pos){
    if(pos == 0){
        this->posicion=pos;
    }
    else{
        this->posicion=pos;
        this->siguiente->setPosicion(this->posicion+1);

    }

}
