#include "pila.h"
#include <iostream>
#include <stdlib.h>
using namespace std;

pila::pila()
{
        n=0//ctor
}
void pila::ini(void)
{
    n=0;
}

void pila::push(char a)
{
    if(n <10)
        buf[n++]=a
    else
        errorllena();
}

void pila::pop(void)
{
    if(n<=0)
    {
        errorvacia();
        return " ";
    }
    else
        return buf[--n];
}

void pila::errorllena(void)
{
    cout<<"La pila esta llena";
}

void pila::errorvacia(void)
{
    cout<<"La pila esta vacia";
}

pila::~pila()
{
    //dtor
}

void MostrarOpciones(void)
{
    cout<< "\n A. Añadir\n";
    cout<< "E. Extraer\n";
    cout<< "F. FIn \n\n";
    cout<< "Opcion";
}

void main(void)
{
    char c;
    pila p;
    int fin=0;

    p.ini();
    while(!fin)
    {
        MostrarOpciones();
        cin<<c;

        switch(c)
        {
            case
        }


    }
}
