/*Hecho por Arvin Duvalier Diaz Amaya
  CARNET: DA18008
  -Escribir una función que multiplique un valor por 10 y devuelva el valor modificado.
   Hacer un programa que la utilice. 
*/
//libreias
#include<iostream>
#include<conio.h>

using namespace std;
//uso una funcion de tipo void y le doy dos parametros por valor y uno por referencia
void calcular(int,int,int&);

int main()
{
	//cro las variables
	int val1;
	int val2 = 10;
	int multiplicacion=0;
	//puidoal usuario que digite el numero
	cout<<"Digite 1 valor ";
	cin>>val1;
	//creo una funcion para llamar a los valores y l multiplicacion y la inicializa en 0
	calcular(val1,val2,multiplicacion);
	//muestra la respuesta
	cout<<"La respuesta es:"<<multiplicacion<<endl;
	
	getch();
	return 0;
}
//vuelvo a declarar la funcion y declaro los parametros por volor y el parametro por referencia
void calcular(int valor1,int valor2, int& multiplicacion)
{//hago la operacion para la multiplicaion
	multiplicacion = valor1*valor2;
}
