#include <cstdlib>
#include <iostream>

using namespace std;

class Cuadrado
{
private:
	float Area,Perimetro,Lado;
		
public:
	Cuadrado()  { Area=0;Perimetro=0;}
	void visualizar();
	void CalcularArea ();
	void CalcularPerimetro ();
	void setBase (float B);
	void setAltura (float Al);
	void setLado (float L);
};
void Cuadrado::visualizar()
{
	cout<< "Area:" << Area << endl;
	cout<< "Perimetro:" << Perimetro <<endl;
	cout<< "Lado:" << Lado <<endl; 
}
void Cuadrado::CalcularArea()
{
	Area= Lado*Lado;
}
void Cuadrado::CalcularPerimetro()
{
	Perimetro= Lado*4;
}
void Cuadrado::setLado(float L)
{
	Lado=L;
}
