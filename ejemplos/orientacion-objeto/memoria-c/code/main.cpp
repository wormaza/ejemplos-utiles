#include <iostream>
#include <stdio.h>
#include <math.h>
#include <string>

using namespace std;

class Recta
{
	protected:
		int x1,y1,x2,y2;
		string name;
	public:
		Recta(int a, int b, int c, int d):x1(a),y1(b),x2(c),y2(d){};
		void SetName(string s){
			this->name = s;
		}
		string GetName(){
			return this->name;
		}
		~Recta();
		float m();
        float b();
		void Modp1(int a, int b);
		void Modp2(int a, int b);
};

void Modificacion(Recta r){
	r.SetName("Cambie!");
}

void Modificacion(Recta* r){
	r->SetName("Cambie!");
}

#pragma region DEFINICIONES

Recta::~Recta(){
	cout <<"Se ha eliminado la recta "<<this->name<<endl;
}

float Recta::m(){
	if ((x1 == x2))
		return 0;
	return ((float)y1-(float)y2)/((float)x1-(float)x2);
}

float Recta::b(){
	return y1-(this->m()*(float)x1);
}

void Recta::Modp1(int a, int b){
	if (not(a==x2 && b==y2)){
		this->x1 = a;
		this->y1 = b;
	}
}

void Recta::Modp2(int a, int b){
	if (not(a==x1 && b==y1)){
		this->x2 = a;
		this->y2 = b;
	}
}

#pragma endregion

int main(int argc, char** argv)
{
	Recta L1(0,0,1,1);
	Recta* L2 = new Recta(0,0,1,1);
	L1.SetName("L1");
	L2->SetName("L2");
	//cout << L1.GetName() <<": m="<< L1.m() <<", b= "<< L1.b() << endl;
	//cout << L2->GetName() <<": m="<< L2->m() <<", b= "<< L2->b() << endl;
	cout <<"Caso L1:" << L1.GetName() << endl;
	cout <<"Caso L2:"  << L2->GetName() << endl;
	delete L2;
	L2 = NULL;

	cout << "Ejemplo referencia vs objeto en C++" <<endl;
	Recta L1_(0,0,1,1);
	Recta* L2_ = new Recta(0,0,1,1);
	L1_.SetName("L1_");
	L2_->SetName("L2_");
	Modificacion(L1_);
	Modificacion(L2_);
	cout << L1_.GetName() << endl;
	cout << L2_->GetName() << endl;

	return 0;
}