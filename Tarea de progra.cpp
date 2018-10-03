/*Arvin Duvalier Diaz Amaya
  Carnet: DA18008

Una empresa de telefonia neceita calcular el total apagar por cada cliente 
segun la siguiente tabla de 
1-10 min de llamada se pagan 0.05$
11- a 15 min son 0.11$
mas de 15 min se pagan 0.10 $
haga un programa que calule el total apagar por cada llamada implementando ciclos y funciones
*/
#include<iostream>//operaciones de entrada y salida
#include<math.h>//hacer operaciones matematicas
#include<iomanip>// para nuemros decimales

using namespace std;
//cuerpo del programa
int main (){
	//declaracion de variables
	float minutos;
	float costo;
	
	do{
	//pido el numero de minutos que se hablo
	cout<<"Minutos hablados"<<endl;
	// guarda los numeros digitados por el usuario
	cin>>minutos;
	}
	while(minutos <= 0);//no valdran los numeros menores de 0
	
	//condicional del proceso
	if(minutos >=1.0 && minutos<=10.0)
	{
	//oprecaion ue se realizara
	costo= minutos* 0.5;
	
	}
		//condicional del proceso
	else if (minutos >=11.0 && minutos<=15.0)
	{
		//oprecaion ue se realizara
		costo= minutos*0.11;
	}
	//condicional del proceso
	else if(minutos >=15.0)
	{
		//oprecaion ue se realizara
		costo= minutos*0.10 ;
	}
		system("cls");//se limpiara despues de cada proceso
	//mostrara la respuesta obtenida
	cout<<"Pago por llamada realizada: $\n"<<setprecision(2)<<costo<<endl;
	
	return 0;
}

