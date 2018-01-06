#ifndef FRACCION_H
#define FRACCION_H


class fraccion
{
    public:
        fraccion(int n=0, int d=0) : numerador(n), denominador(d) {
            Simplificar();
        }
        void Simplificar();
        void Mostrar();
    private:
        int numerador;
        int denominador;
        int MCD(int, int);
};

#endif // FRACCION_H
