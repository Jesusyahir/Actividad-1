#include <cstdlib>
#include <iostream>
#include <Math.h>

using namespace std;

class Triangulo
{
private:
	float Area,Perimetro,L1,L2,L3,semi;
		
public:
	Triangulo()  { Area=0;Perimetro=0;L1=0;L2=0;L3=0;semi=0; }
	void visualizar();
	void CalcularArea ();
	void CalcularPerimetro ();
	void setL1 (float La);
	void setL2 (float Lb);
	void setL3 (float Lc);
};
void Triangulo::visualizar()
{
	cout<< "Area:" << Area << endl;
	cout<< "Perimetro:" << Perimetro <<endl;
	cout<< "L1:" << L1 <<endl;
	cout<< "L2:" << L2 <<endl;
	cout<< "L3:" <<L3 <<endl;
}
void Triangulo::CalcularArea()
{
	semi=(L1+L2+L3)/2;
	Area=sqrt (semi*(semi-L1)*(semi-L2)*(semi-L3));
}
void Triangulo::CalcularPerimetro()
{
	Perimetro= L1+L2+L3;
}
void Triangulo::setL1(float La)
{
	L1= La;
}
void Triangulo::setL2(float Lb)
{
	L2=Lb;
}
void Triangulo::setL3(float Lc)
{
	L3=Lc;
}
