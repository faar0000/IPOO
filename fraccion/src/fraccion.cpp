#include "fraccion.h"

#include <iostream>

using namespace std;

void fraccion::Simplificar() {
    int mcd = MCD(numerador, denominador);
    numerador /= mcd;
    denominador /= mcd;
}

void fraccion::Mostrar() {
    cout << numerador << "/" << denominador << endl;
}

int fraccion::MCD(int a, int b) {
    if(a < b) return MCD(b,a);
    if(b == 0) return a;
    return MCD(b, a % b);
}
