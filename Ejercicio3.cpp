/*Hecho por Arvin Duvalier Diaz Amaya
  CARNET: DA18008
  Escribir una funci�n potencia(), que calcule la potencia de un n�mero n (tipo double) elevado a un exponente p (tipo int).
  Escribir un programa que haga uso de esta funci�n
*/
#include<iostream>
#include<cstdlib>
#include<stdio.h>

using namespace std;

int main()
{
	//declaro las variables a usar
	int numero;
	int potencia;
	int respuesta;
	/*pido los valores,===NOTA:al correrlo no entiendo porque me salen numeros
	pero simpre que ponga un mero el programa correra normalmenmte  
	*/ 
	cout<<'ingrese un valor: '<<endl;
	cin>>numero;
	cout<<"ingrese el exponente"<<endl;
	cin>>potencia;
	/*creo un for que se encargue de elevarlo a la potencia
 	donde la respuesta sea igual al numero y la potenca mayor a cero, la potencia se
 	restara y la respuesta es multiplicada por la base
 	*/
	for( respuesta = numero;potencia > 0; potencia--) respuesta *=numero;
	printf("La respuesta es %d",respuesta);
	
	printf("\n\n\n");
	system("PAUSE");
	return 0;
}
