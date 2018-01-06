#include <iostream>
using namespace std;

/**
 * Estructura Nodo
 */
struct Nodo {
	int valor;
	Nodo *siguiente;
};

/**
 * Clase Lista
 */
class Lista {
private:
	Nodo *_primero;
public:
	Lista();
	~Lista();
	void agregar( int );
	Nodo * primero();
};

/**
 * Constructor
 */
Lista::Lista() {
	_primero = NULL;
}

/**
 * Destructor
 */
Lista::~Lista() {
	Nodo *nodo_actual = _primero;
	while( nodo_actual != NULL ) {
		Nodo *siguiente = nodo_actual->siguiente;
		delete nodo_actual;
		nodo_actual = siguiente;
	}
}

/**
 * Método Agregar
 * Agrega un nodo a la lista
 */
void Lista::agregar( int nuevo_valor ) {
	Nodo *nuevo_nodo = new Nodo;
	nuevo_nodo->valor = nuevo_valor;
	nuevo_nodo->siguiente = NULL;
	if( _primero == NULL ) {
		_primero = nuevo_nodo;
	} else {
		Nodo *nodo_actual = _primero;
		while( nodo_actual->siguiente != NULL ) nodo_actual = nodo_actual->siguiente;
		nodo_actual->siguiente = nuevo_nodo;
	}
}
/*void Lista::insertar(int v){
    Nodo *temp = primero;
    Nodo *anterio = 0;
    Nodo *nuevo = new Nodo(v);
    if (primero == 0){
        primero = nuevo;
        actual = nuevo;
    }
    else {
        if (actual->valor<=v){
            actual ->siguiente = nuevo;
            actual =nuevo;
        }
        while(temp){
            anterior = temp;
            temp = temp->siguiente;
            if(temp->valor<=v){
                anterior->siguiente =nuevo;
                nuevo ->siguiente=temp;
                break;
            }
        }
    }





}

void Lista::retenerBorrar(intm , int n){
    int a=0,b=n;
    Nodo *temp=primero;
    Nodo *temp2=0;
    Nodo *anteior=0;
    while(temp){
        anterior=temp;
        temp=temp->siguiente;
        a++;
        if(a==m){b=0;a=0;}
        while(temp!=0 & b<n){
            temp2=temp;
            anteior->siguiente=temp->siguiente;
            temp=temp->siguiente;
            delete temp2;
            b++;
        }
    }
    actual=anterior;
}

void Lista::borradoalternado(){
    bool flag=true;
    Nodo *temp=primero;
    Nodo *temp2=0;
    Nodo *anterio=temp;
    nodo *temp ->siguiente;
    while(temp){
        if(flag){
            temp2=temp;
            temp=temp->siguiente;
            anterio->siguiente =temp;
            delete temp2;
            flag= false;
            anterior = temp;
        }
        else{
            flag=true;
            temp=temp->sigueiente;
        }
    }
}

*/

/**
 * Método Primero
 * retorna el primer nodo de la lista
 */
Nodo * Lista::primero() {
	return _primero;
}

/**
 * Función principal
 */
int main() {
	Lista lista;

	// se agregan algunos valores a la lista
	lista.agregar( 17 );
	lista.agregar( 21 );
	lista.agregar( 12 );

	// se recorre la lista y se muestran los valores agregados
	Nodo * it = lista.primero();
	while( it != NULL ) {
		cout << it->valor << endl;
		it = it->siguiente;
	}
	return 0;
}


