#include <cstdlib>
#include <iostream>

using namespace std;

class Rectangulo
{
private:
	float Area,Perimetro,Base,Altura;
	
		
public:
	Rectangulo()  { Area=0;Perimetro=0;Base=0;Altura=0; }
	void visualizar();
	void CalcularArea ();
	void CalcularPerimetro ();
	void setBase (float B);
	void setAltura (float Al);
};
void Rectangulo::visualizar()
{
	cout<< "Area:" << Area << endl;
	cout<< "Perimetro:" << Perimetro <<endl;
	cout<< "Base:" << Base <<endl;
	cout<< "Altura:" << Altura <<endl;
}
void Rectangulo::CalcularArea()
{
	Area= Base*Altura;
}
void Rectangulo::CalcularPerimetro()
{
	Perimetro= 2*(Base*Altura);
}
void Rectangulo::setBase(float B)
{
	Base= B;
}
void Rectangulo::setAltura(float Al)
{
	Altura= Al;
}
