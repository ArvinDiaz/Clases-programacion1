/*Hecho por Arvin Duvalier Diaz Amaya
  CARNET: DA18008
 Diseñar una función area() que pueda calcular el área de un cuadrado y un cubo.
Escribir un programa que haga uso de esta función.-
*/

#include<iostream>
#include<math.h>
#include<stdlib.h>
#include<conio.h>

using namespace std;

int main()
{
	//declaro dos double para la area del cuadrado y uno para la del cubo
	double num;
	double area = 0;
	int lado;
	//pido los datos
	cout<< "Ingrese el numero de lados del cuadrado: "<<endl;
	cin>>num;
	cout<< "Ingrese los lados del cubo: ";
	cin>>lado;
	//el area sera igual al numero de lados al cuadrado 
	area = pow(num,2);
	//muestro la respuesta del area del cuadrado
	cout<<"El area del cuadrado es: "<< area<<endl;
	//muestro la respues del area del cubo y tambien hago la multiplicacion de la lados por seis
	cout<<"El area del cubo es: "<< 6 * lado * lado;
	
	return 0; 
}
