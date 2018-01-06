#ifndef NODO_H
#define NODO_H

template<class T>

class nodo
{
    public:
        nodo();
        T valor;
        int posicion;
        void setPosicion(int pos);
        nodo * siguiente;
    private:
};

#endif // NODO_H
