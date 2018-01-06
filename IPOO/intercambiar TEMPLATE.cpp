#include <iostream>


using namespace std ;

template <class T>

T intercambiar(T a, T b){
    T temp=a;
    a=b;
    b=temp;
    cout<<a<<endl;
    cout<<b<<endl;
}



int main(){
    intercambiar(1.5,2.8);
    return 0;
}
