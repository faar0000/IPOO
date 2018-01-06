#ifndef LISTA_H
#define LISTA_H
#include "nodo.h"

template<class T>

class lista
{
    public:
        lista();
        int tam;
        //void insertarValor(nodo* n);
        void insertar(T valor);
        void mostrar();
        nodo* primero;
        nodo* actual;

    private:
};

#endif // LISTA_H
