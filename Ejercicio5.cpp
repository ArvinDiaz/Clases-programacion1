/*Hecho por Arvin Duvalier Diaz Amaya
  CARNET: DA18008
   -Escribir una función menorAcero() al que se pasan dos argumentos int por referencia y a continuación fijar el menor de los dos números a 0.
   Escribir un programa que utilice esta función. 
  */
//declaro las librerias en este caos solo necesito una
#include<iostream>

using namespace std;
//uso una funcion de tipo void
void menorAcero();
//declaro varibles globales
	int x;
	int y;

int main()
{
	//pido lo datos	
	cout<<"ingrese el valor de x: ";
	cin>>x;
	cout<<"ingrese el valor de y: ";
	cin>>y;
	//llamo a la funcion void para que se muestre
	menorAcero();
	
	cout<< "el valor de x es: "<<x<<endl;
	cout<< "el valor de y es: "<<y<<endl;
	
	
	return 0;
}

void menorAcero()
{
	//doy una condicion de si
	if(x<y)
	{
		cout<<"El valor del primer numero esmenor que: "<<y<<endl;
		cout<<"El segundo nunmero es mayor que: "<<x<<endl;
	
		x=0;
	}
	//escribo otra funcion por si no se cumple
	else if(y<x)
	{
		cout<<"El valor del segundo numero es menor que: "<<x<<endl;
		cout<<"El valor del primer nunmero es meyor que: "<<y<<endl;
	
		y=0;
		
	}
	//imprimo los valores	
	cout<<"El valor del primer numero es " << x <<endl;
   
	cout<<"El valor del segundo numero es " << y <<endl;
} 

