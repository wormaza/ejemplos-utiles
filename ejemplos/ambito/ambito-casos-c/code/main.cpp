#include <stdio.h>
#include <iostream>
using namespace std;

namespace ambito2{
    int a = 3000;
}

//El "a" que vive aqui es solo en el ámbito de la función.
void funcion(int a)
{   
    a += 1000;
    int b = 0;
    cout << "Existe <funcion>a : "<<a<< " ("<<&a<<")"<<endl;
    cout << "Existe <funcion>b : "<<b<< " ("<<&b<<")"<<endl;
}

void funcion2()
{
    static int a = 0;
    int b;
    b = a;
    cout << "<funcion2>Existe ++a : "<<++a<< " ("<<&a<<")"<<endl;;
    cout << "<funcion2>Existe b : "<<b<< " ("<<&b<<")"<<endl;;
}

void funcion10()
{
    static int a = 0;
    int b = -1;
    cout << "<funcion10>Existe a : "<<a<< " ("<<&a<<")"<<endl;;
    cout << "<funcion10>Existe b : "<<b<< " ("<<&b<<")"<<endl;;
    for(;a<6;a++){
      b = a;
    }
    cout << "<funcion10>Existe b : "<<b<< " ("<<&b<<")"<<endl;;
}

int main(int argc, char** argv)
{
    
    funcion10();
    funcion10();
    int a = 0;
    cout << "Existe <main>a : "<<a<< " ("<<&a<<")"<<endl;
    if(++a > 0)
    {
        int b = a;
        cout << "Existe <main.if>a : "<<a<< " ("<<&a<<")"<<endl;
        cout << "Existe <main.if>b : "<<b<< " ("<<&b<<")"<<endl;
    }

    cout << "Existe <main>a : "<<a<< " ("<<&a<<")"<<endl;
    //cout << "Existe b : "<<b<<endl; //Fuera del ámbito del if ya no existe b

    // el a del ámbito del for, difiere del de la función main
    for (int a = 8;a < 10;a++)
        cout << "Existe <main.for>a : "<<a<< " ("<<&a<<")"<<endl;
    
    //Aqui ya no existe a del ambito anterior
    cout << "Existe <main>a : "<<a<< " ("<<&a<<")"<<endl;

    if(a > 0)
    {
        int a = 100; //se define un "a", pero vive solo en el ámbito del segundo if
        cout << "Existe <main.if>a : "<<a<< " ("<<&a<<")"<<endl;
    }

    cout << "Existe <main>a : "<<a<< " ("<<&a<<")"<<endl;

    funcion(a); //la función tiene su propio ámbito
    cout << "Existe <main>a : "<<a<< " ("<<&a<<")"<<endl;
    funcion(a); //la función tiene su propio ámbito
    cout << "Existe <main>a : "<<a<< " ("<<&a<<")"<<endl;
    funcion(a); //la función tiene su propio ámbito
    cout << "Existe <main>a : "<<a<< " ("<<&a<<")"<<endl;
    funcion2();
    funcion2();
    funcion2();
    cout << "Existe <main>a : "<<a<< " ("<<&a<<")"<<endl;

    //Podemos forzar el ámbito con el uso de {}
    {
        int a = 900;
        cout << "Existe <main.ambitox>a : "<<a<< " ("<<&a<<")"<<endl;
    };

    cout << "Existe <main>a : "<<a<< " ("<<&a<<")"<<endl;
    cout << "Existe <main.ambito2>a : "<<ambito2::a<< " ("<<&(ambito2::a)<<")"<<endl;

    return 0;
}
