#include "lista.h"
#include "nodo.h"
#include <iostream>
#include <cstdlib>

using namespace std ;

lista::lista()
{
    tam=0;
    primero = NULL;
    actual = NULL;
}

void lista::insertarLista(nodo * n){

    if (primero == NULL){
        primero=n;
        actual=n;
    }
    else {
        actual->siguiente=n;
        actual=n;

    }
    actual->setPosicion(tam);
    tam ++;

    }
}


template<class T>
void lista::insertarValor(T valor)
{
    nodo* temp = new nodo();
    temp->valor=valor;

    this->insertar(temp);

}

void lista::mostrar(){
    nodo *temp = primero;


    while (temp != 0){
        cout<<temp->valor<<"("<<temp->posicion<<")->";
        temp =temp->siguiente;
    }
    if(temp==0)
        cout<<"end"<<endl;
    delete temp;
}
