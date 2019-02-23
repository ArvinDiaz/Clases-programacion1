/*Hecho por Arvin Duvalier Diaz Amaya
  CARNET: DA18008
  1. Escribir una función mayor() que intercambie dos valores cuando el primero sea mayor que el segundo.
    Hacer un programa que la utilice. 
*/
#include<iostream>

using namespace std;

int main()
{
	//decllaro las variables a usar 
	int a;
	int b;
	int alterno;
	//pido al usuario que me escriba los valores
	cout<<"Escriba el valor de a: ";
	cin>>a;
	cout<<"Escriba el valor de b: ";
	cin>>b;
	//pongo una condicion de si a > b se cumple lo siguiente
	if(a>b )
	{
	//declaro que alterno almacena el valor a
	alterno =a;
	//y el valor a tendra el valor de b
	a = b;
	//como b no tiene valor lo igulo para que tenga el valor de alterno
	b = alterno;
	}
	//escribo otra condicion por si no se cumple
	else
	{
		//pongo nuevamente la funcion if para el caso de que b>a
		if(b>a)
		{
		//mantiene los mismas parametros
		alterno =a;
		a = b;
		b = alterno;
		}
	}
	cout<<"El valor de a es: "<<a<<endl;
	cout<<"El valor de b es: "<<b<<endl;
	system ("PAUSE");
	return 0;
		
}
