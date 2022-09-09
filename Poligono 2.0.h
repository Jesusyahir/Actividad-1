#include <cstdlib>
#include <iostream>

using namespace std;

class Poligono
{
private:
	float NoLados,Lados,Apotema,Area,Perimetro;
	
public:
	Poligono() { NoLados=0;Lados;Apotema,Area,Perimetro; }
	
	void visualizar();
	void SetNoLados(float NL);
	void setLados(float L);
	void SetApotema(float Ap);
	void CalcularArea ();
	void CalcularPerimetro ();
};
void Poligono::visualizar()
{
	cout<< "NoLados:" << NoLados << endl;
	cout<< "Lados:" << Lados <<endl;
	cout<< "Apotema:" << Apotema <<endl;
	cout<< "Area:" << Area << endl;
	cout<< "Perimetro:" << Perimetro <<endl;
}
void Poligono::SetNoLados(float NL)
{
	NoLados=NL;
}
void Poligono::setLados(float L)
{
	Lados=L;
}
void Poligono::SetApotema(float Ap)
{
	Apotema=Ap;
}
void Poligono::CalcularArea()
{
	Area=(NoLados*Lados)*Apotema;
}
void Poligono::CalcularPerimetro()
{
	Perimetro=NoLados*Lados;
}
