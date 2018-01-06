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

void lista::insertar(nodo * n){

    if(buscar(n->valor))
    {
        cout<<"Ya se inserto: "<<n->valor<<endl;
    }else{
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

void lista::insertarAleatorio(int valor){
    int pos=rand()% this->tam;
    nodo* nodeValue =new nodo();
    nodeValue->valor =valor;
    if(pos==0){
        primero = nodeValue;
        nodeValue->setPosicion(0);
    }
    else {
        nodo* temp = primero;
        while(temp!=0){
            if(temp->siguiente->posicion==pos)
                {
                    nodeValue->siguiente = temp->siguiente;
                    temp->siguiente = nodeValue;
                    nodeValue->setPosicion(pos);
                    return;
                }
                temp = temp->siguiente;
        }
    }

}



void lista::insertar(int valor,int pos)
{
    if(pos>this->tam)
    {
        cout<<"No se puede insertar en la posicion: "<<pos<<endl;
        return;
    }else{
        cout<<"empezo insertar"<<endl;
        nodo* nodeValue = new nodo();
        nodeValue->valor = valor;


        if(pos==0){
            primero = nodeValue;
            nodeValue->setPosicion(0);
        }else{

            nodo* temp = primero;

            while(temp!=0)
            {

                cout<<"pos_actual "<<temp->siguiente->posicion<<endl;
                if(temp->siguiente->posicion==pos)
                {
                    nodeValue->siguiente = temp->siguiente;
                    temp->siguiente = nodeValue;
                    nodeValue->setPosicion(pos);
                    return;
                }
                temp = temp->siguiente;
            }

        }




    }
}

void lista::elimar(int valor){
    nodo *temp = primero;
    nodo *eliminar;
     while (temp != 0){
        if(temp->siguiente->valor==valor)
        {
            eliminar=temp->siguiente;
            temp->siguiente=eliminar->siguiente;
            delete eliminar;
            temp->setPosicion(temp->posicion);
            return;
        }

        temp =temp->siguiente;
     }
}
bool lista::buscar(int valor)
{
     nodo *temp = primero;
     while (temp != 0){
        if(temp->valor==valor)
        {
            return true;
        }

        temp =temp->siguiente;
    }
    return false;
}

void lista::insertar(int valor)
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


