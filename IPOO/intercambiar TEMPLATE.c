#include <iostream>
#include <stdlib>

using namespace std ;

template <class T>

T intercambiar(T a, T b,T c){
    T temp=a;
    a=b;
    b=c;
    c=a;
    cout<<a,b,c<<endl;
}



int main(){
    intercambiar(1,2,3);
    return 0;
}
