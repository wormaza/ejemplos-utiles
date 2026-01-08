#include <stdio.h>
#include <iostream>
#include <string>
#include <typeinfo>

using namespace std;

int main(int argc, char** argv)
{
    cout <<"\n***CONVERSION y COERCION***"<<endl;
    #pragma region CONVERSION y COERCION
    cout <<"1 + 0.5 = "<<1 + 0.5<<endl;//coercion!
    cout <<"1 + (int)0.5 = "<<1 + (int)0.5<<endl;
    cout <<"(double)1 + 0.5 = "<<(double)1 + 0.5<<endl;
    int x = 1;
    int y = 2;
    cout <<"x/y = "<<(x/y)<<endl;
    cout <<"(double)(x/y) = "<<(double)(x/y)<<endl;
    cout <<"(double)x / (double)y = "<<((double)x/(double)y)<<endl;
    cout <<"(double)x / y = "<<((double)x/y)<<endl;
    cout <<"x / (double)y = "<<(x/(double)y)<<endl;
    double z = x / y;
    cout <<"z = x/y = "<<z<<endl;

    x = 0.1;
    cout <<"x = 0.1 = "<<x<<endl;//coerción!; 
    bool t = 0; 
    cout <<"bool t = 0 = "<<t<<endl;//coerción!; en realidad aqui el 0 es false 
    t = 1;
    cout <<"bool t = 1 = "<<t<<endl;//coerción!; en realidad aqui el es 1 true
    t = -1;
    cout <<"bool t = -1 = "<<t<<endl;//coerción!; en realidad aqui el valor se interpreta como true (1) 
    t = 0.5;
    cout <<"bool t = 0.5 = "<<t<<endl;//coerción!; en realidad aqui el valor se interpreta como true (1)
    
    cout << "'a' + 'b' = "<<'a' + 'b' <<endl;
    
    auto mm = 'a' + 1;
    cout << "auto mm = 'a' + 1 = "<<mm <<endl;
    

    #pragma endregion
}
