#include <stdio.h>
#include <iostream>
#include <string>
#include <typeinfo>

using namespace std;

int main(int argc, char** argv)
{
    cout <<"***EJEMPLO TIPIFICACION EXPLICITA V/S IMPLICITA***"<<endl;
    cout <<"typeid(var).name() indica el tipo de la variable donde:"<<endl;
    cout <<"i --> int"<<endl;
    cout <<"c --> char"<<endl;
    cout <<"PKc --> cadena de caracteres (char)"<<endl;
    cout <<"d --> double"<<endl;
    cout <<"f --> float"<<endl;
    cout <<"b --> bool"<<endl;
       
    cout <<"\n*** EJEMPLOS EXPLICITA ***"<<endl;
    #pragma region EJEMPLOS EXPLICITA
    int x = 2; 
    cout << "typeid(x).name() = " << typeid(x).name() << endl;
    
    int y = 1; 
    cout << "typeid(y).name() = " << typeid(y).name() << endl;

    double r = 1.0; 
    cout << "typeid(r).name() = " << typeid(r).name() << endl;
    
    float q = 1.0; 
    cout << "typeid(q).name() = " << typeid(q).name() << endl;

    string s = "hola"; 
    cout << "typeid(s).name() = " << typeid(s).name() << endl;
    
    char m = 'a';
    cout << "typeid(m).name() = " << typeid(m).name() << endl;
    
    const char *o = "Ejemplo";
    cout << "typeid(o).name() = " << typeid(*o).name() << endl;

    #pragma endregion

    cout <<"\n*** EJEMPLOS IMPLICITA ***"<<endl;
    #pragma region USO DE auto
    auto z = 1; 
    cout << "typeid(z).name() = " << typeid(z).name() << endl;
    
    auto w = "chao";
    cout << "typeid(w).name() = " << typeid(w).name() << endl;
    
    auto a = x + y;
    cout << "typeid(a).name() = " << typeid(a).name() << endl;
    
    auto b = s;
    cout << "typeid(b).name() = " << typeid(b).name() << endl;
    
    auto c = x / y; //ojo con los tipos involucrados
    cout << "typeid(c).name() = " << typeid(c).name() << endl;
    
    auto d = y / x;
    cout << "typeid(d).name() = " << typeid(d).name() << endl;
    
    auto f = 1.0/2.0;
    cout << "typeid(f).name() = " << typeid(f).name() << endl;

    auto t = 1 > 2.0;
    cout << "typeid(t).name() = " << typeid(t).name() << endl;
    
    //¿Que pasa aquí? (concepto relacionado: coerción!)
    auto e = 1/2.0;
    cout << "typeid(e).name() = " << typeid(e).name() << endl;
    
    auto g = 2.0/1;
    cout << "typeid(g).name() = " << typeid(g).name() << endl;
    
    //a = b;//Ojo, pero no dinamica!!

    #pragma endregion
    
    cout <<"\n*** SIZEOF ***"<<endl;
    cout <<": Tamaño en byte\n"<<endl;
    #pragma region SIZEOF
    cout << "sizeof(int): " << sizeof(int) << endl;
    cout << "sizeof(double): " << sizeof(double) << endl;
    cout << "sizeof(float): " << sizeof(float) << endl;
    cout << "sizeof(char): " << sizeof(char) << endl;
    cout << "sizeof(bool): " << sizeof(bool) << endl;
    #pragma endregion

    //Notar que se realiza en tiempo de compilación
    auto aa = 1 + 2;
    auto bb = 1.0 + 2.0;
    auto cc = aa + bb;
}