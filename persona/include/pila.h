#ifndef PILA_H
#define PILA_H


class pila
{
    public:
        void ini(void);     //inicializa pila
        void push(char a);  //poner caracter
        char pop(void);     //extraer caracter
        pila();
        virtual ~pila();
    protected:
    private:
};



#endif // PILA_H
