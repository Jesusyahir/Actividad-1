#include"Cuadrado 2.0.h"
#include"Rectangulo 2.0.h"
#include"Triangulo 2.0.h"
#include"Circulo 2.0.h"
#include"Poligono 2.0.h"
#include<cstdlib>
#include<iostream>
using namespace std;

int main (int argc, char * arg[])
{	
	int opc,s=0;
	float L,Ap,Ra,No,O,NL,B,Al,L1,L2,L3;
	
	do
	{
		system("Cls");
		Cuadrado C;
		Rectangulo R;
		Triangulo T;
		Circulo Ci;
		Poligono P;

	cout<<"Welcome the program for calcular el area y perimetro de una figiura"<<endl;
	cout<<"1 Cuadrado"<<endl;
	cout<<"2 Rectangulo"<<endl;
	cout<<"3 Triangulo"<<endl;
	cout<<"4 Circulo"<<endl;
	cout<<"5 Poligono"<<endl;
	cout<<"Selecciona una opcion"<<endl;
	cin>>opc;
	
	switch(opc)
	{
		case 1:cout<<"1 Cuadrado"<<endl;
				system("Cls");
				do{
				cout<<"Lado"<<endl;
				cin>>L;
				}while (L < 1);
				C.setLado(L);
				C.CalcularArea();
				C.CalcularPerimetro();
				C.visualizar();
				break;
		case 2:cout<<"2 Rectangulo"<<endl;
				system("Cls");
				do{
				cout<<"Base"<<endl;
				cin>>B;
				}while (B <1);
				do{
				cout<<"Altura"<<endl;
				cin>>Al;
				}while (Al < 1);
				R.setBase(B);
				R.setAltura(Al);
				R.CalcularArea();
				R.CalcularPerimetro();
				R.visualizar();
				break;
		case 3:cout<<"3 Triangulo"<<endl;
				do{
				cout<<"L1"<<endl;
				cin>>L1;
				}while (L1 < 1);
				do{
				cout<<"L2"<<endl;
				cin>>L2;
				}while (L2 < 1);
				do{
				cout<<"L3"<<endl;
				cin>>L3;
				}while (L3 < 1);
				T.setL1(L1);
				T.setL2(L2);
				T.setL3(L3);
				T.CalcularArea();
				T.CalcularPerimetro();
				T.visualizar();
				break;
		case 4:cout<<"4 Circulo"<<endl;
				do{
				cout<<"Radio"<<endl;
				cin>>Ra;
				}while (Ra < 1);
				Ci.setRadio(Ra);
				Ci.CalcularArea();
				Ci.visualizar();
				break;
		case 5:cout<<"5 Poligono"<<endl;
				do{
				cout<<"Nolados"<<endl;
				cin>>NL;
				}while (NL < 1);
				do{
				cout<<"Lados"<<endl;
				cin>>L;
				}while (L < 1);
				do{
			 	cout<<"Apotema"<<endl;
			 	cin>>Ap;
			 	}while (Ap < 1);
			 	P.SetNoLados(NL);
			 	P.setLados(L);
			 	P.SetApotema(Ap);
			 	P.CalcularArea();
			 	P.CalcularPerimetro();
			 	P.visualizar();
			 	break;
			default:
				cout<<"ERROR... Seleccione una opcion correcta"<<endl;
				}
		cout<<""<<endl;
		cout<<"Desea regresar al Menu"<<endl;
		cout<<"Si presione 1       No... Presione cualquier otra tecla"<<endl;
		cin>>s;
			}while(s==1);
			getchar();
			system("pause");
			return 0;
}
