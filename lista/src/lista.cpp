#include "lista.h"
#include <iostream>
#include <stdio.h>

using namespace std;
lista::lista()
{
    //ctor
}

void lissta ::invertir()
{
    nodo* anterior = NULL;
    nodo* siguiente = NULL;
    nodo* temp=primero;
    actual=primero;
    while(temp)
    {
        siguiente=temp->siguiente;
        temp->siguiente=anterior;
        anterior=temp;
        temp=siguiente;
    }
    primero=anterior;
}

void lista::elimarrepetidos()
{
    nodo*temp=primero;
    nodo*temp2=0;
    nodo*temp3=0;
    while(temp)
    {
        temp2=temp->siguiente;
        while(temp)
        {
            if (temp->valor == temp2->valor)
            {
                temp->siguiente=temp2->siguiente;
                temp3=temp2;
                delete temp3
                if(temp->siguiente==0)  actual=temp
            }
        }
          temp2=temp2->siguiente;
            }
    }
    temp=temp->siguiente;
}

lista::~lista()
{
    //dtor
}
