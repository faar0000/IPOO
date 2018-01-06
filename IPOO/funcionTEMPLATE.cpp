#include <iostream>

using namespace std;

template<typename tipo>tipo suma(tipo a,tipo b)
{
    return a+b;
}

int main()
{
    cout<<suma(1,2)<< endl;
    cout<<suma(1.0, 2.0)<< endl;
    cout<<suma(1.0,2.0)<< endl;
}
