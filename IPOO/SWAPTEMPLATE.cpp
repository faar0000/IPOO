
#include <iostream>
#include <string>

using namespace std;

template<class T> void myswap(T&a,T&b){
    T temp;
    temp=a;
    a=b;
    b=temp;
    return;
}

int main(){
    int i = 39;
    int j = 20;
    myswap(i, j);
    cout<<i<<j<< endl;

    return 0;


}
