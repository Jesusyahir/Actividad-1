#include <cstdlib>
#include <iostream>

using namespace std;

class Circulo
{
private:
	float Area,Radio;
		
public:
	Circulo()  { Area=0;Radio=0; }
	void visualizar();
	void CalcularArea ();
	void setRadio (float R);
};
void Circulo::visualizar()
{
	cout<< "Area:" << Area << endl;
	cout<< "Radio:" << Radio <<endl;
}
void Circulo::setRadio(float R)
{
	Radio=R;
}
void Circulo::CalcularArea()
{
	Area= 3.1416*(Radio*Radio);
}

