#include "lista.h"

#include <iostream>

using namespace std;

int main (){




    nodo* A = new nodo();
    A->valor=10;
    cout<<A->valor<<endl;

    nodo* B = new nodo();
    B->valor=20;
    cout<<B->valor<<endl;

    nodo* C = new nodo();
    C->valor=30;
    cout<<C->valor<<endl;

    lista* mi_lista = new lista();

    mi_lista->insertar(100);
    mi_lista->insertar(A);
    mi_lista->insertar(B);
    mi_lista->insertar(50);
    mi_lista->insertar(50);
    mi_lista->insertar(C);
    mi_lista->insertarAleatorio(2222);


    mi_lista->insertar(25,2);
    mi_lista->elimar(50);
    mi_lista->mostrar();

    cout<<"-------------------"<<endl;
    cout<<mi_lista->buscar(59);
    cout<<mi_lista->buscar(50);




    return 0;
}
