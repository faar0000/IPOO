#ifndef LISTA_H
#define LISTA_H

#include "nodo.h"


class lista
{
    public:
        lista();
        int tam;
        void insertar(nodo* n);
        void insertar(int valor);
        void insertar(int valor,int pos);
        void insertarAleatorio(int valor);
        void elimar(int valor);
        bool buscar(int valor);
        void mostrar();
        nodo * primero;
        nodo * actual;
    protected:
    private:
};

#endif // LISTA_H
