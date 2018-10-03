//SEGUNDO EJERCICIO:UTILIZANDO FUNCIONES Y TRABAJAR MAS LAS VALIDACIONES
/* Arvin Duvalier Diaz Amaya
   Carnet: DA18008

- Una empresa necesita calcular la produccion diaria de bebidas y los insumos requeridos
para la elavoracion de refresco de acuerdo a la suguiente tabla
*		agua	azucar
 soda   500ml   800g
 jugo   600ml   700g
 hacer un programa que permita ingresar la produccion diaria y muestre en panalla los 
 insumos requeridos 
 
 CORREO: tareasuesfmo@gmail.com */
#include<iostream>//operaciones de entrada y salida
#include<math.h>//hacer operaciones matematicas
#include<iomanip>// para nuemros decimales

using namespace std;
//cuerpo del programa
int main()
{	
//declaracion de variables
	float soda;
	float jugo;
	float aguaSoda=500;
	float azucarSoda=800;
	float aguaJugo= 600;
	float azucarJugo= 700;
	float aguaUtilizadaSoda;
	float azucarUtilizadaSoda;
	float totalAzucarYAguaSoda;
	float aguaUtilizadaJugo;
	float azucarUtilizadaJugo;
	float totalAzucarYAguaJugo;
	do{
	//pido el numero de sodas
	cout<<"Numero de sodas que desa producir"<<endl;
	// le pido al usuario que digite el numero
	cin>>soda;
	//pido el numero de jugs
	cout<<"Numero de jugos que desea producir"<<endl;
	// le pido al usuario que digite el numero
	cin>>jugo;
	
	}
	while(soda<= 0 && jugo <=0);//lo utilizo para que no puedan usarse los numeros negativos	
	
	//operacion que realizo para obtener la cantidad de azucar y agua para la soda
	aguaUtilizadaSoda = aguaSoda * soda;
	azucarUtilizadaSoda = azucarSoda * soda;
	totalAzucarYAguaSoda = aguaUtilizadaSoda + azucarUtilizadaSoda;
	//operacion para saber cuanta agua y azucar se uso para el jugo
	aguaUtilizadaJugo = aguaJugo * jugo;
	azucarUtilizadaJugo = azucarJugo * jugo;
	totalAzucarYAguaJugo = aguaUtilizadaJugo + azucarUtilizadaJugo;
	
	system("cls");//para que vaya limpiando despues de cada proceso
	//mueestro las respuestas de agua, azucar y la suma final de lo utilizado en el numero de sodas
	cout<<"agua utilizada: "<<aguaUtilizadaSoda<<endl;
	cout<<"azucar utilizada: "<<azucarUtilizadaSoda<<endl;
	cout<<"produccion reliazada, N. de unidades: "<<totalAzucarYAguaSoda<<endl;
	//muestrp la cantidad de azucar,agua y su total al producir cierto numero de sodas
	cout<<"aguaUtilizada: "<<aguaUtilizadaJugo<<endl;
	cout<<"azucarUtilizada"<<azucarUtilizadaJugo<<endl;
	cout<<"produccion reliazada, N. de unidades: "<<totalAzucarYAguaJugo<<endl;
	
	 return 0;
	
}
