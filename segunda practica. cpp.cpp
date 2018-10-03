/*Arvin Duvalier Diaz Amaya
  Carnet:DA18008
una empresa comrcializadora contrata vendedores a los cuales les paga
un salario de acuerdo al total de las ventas realizadas en el mes. La siguiente
tabla es tomada como referencia pra calocular el sueldo de cada vendedor.*/

//libreria de c++
#include<iostream>//operaciones de entrada y salida
#include<math.h>//hacer operaciones matematicas
#include<iomanip>// para nuemros decimales
#include<windows.h>//para poner los sonidos

using namespace std;
//cuerpo del programa
int main()
{
	/*para cambiar el color de letra y fondo, 
	el primr numero para el fondo y el segundo para las letras*/
	system("color 30");
	
	//declaracion de variables
	int ventas;
	int sueldo;
	do{
	//pido el numero de ventas
	cout<<"ingrese el numero de ventas:"<<endl;
	// le pido al usuario que digite el numero
	cin>>ventas;
	}
	while(ventas <= 0);
	
	//aplico las condiciones para que pueda hacer la operacion	
	if (ventas > 0 && ventas< 50000)
	{
		sueldo = 80000;
	}
	
	//segunda condicional para el sueldo
	else if (ventas > 50000 && ventas< 100000)
	{
		sueldo = 160000;
	}
	
	/*tercera condicional para ventas mayores a
	50000 y "la letra && significa y" menor a 100000*/
	else if (ventas > 100000 && ventas < 150000)
	{
		sueldo = 320000;
	}
	
	/*cuarta condicional para ventas mayores a 
	150000 y menor a 250000*/
	else if (ventas > 150000 && ventas < 250000)
	{
		sueldo = 450000;
	}
	
	/*quinta acondicional para ventas mayores a
	250000 y menor a 4000000*/
	else if (ventas > 250000 && ventas < 4000000)
	{
		sueldo = 550000;
	}
	
	//ultima codicional para el sueldo aplicando el 20% de descuento
	else
	{
		sueldo = ventas*0.20;
	}
	
	//salida de datos, muestra el sueldo
	cout<<"Su sueldo es:"<<fixed<<setprecision(3)<<sueldo<<endl;
	Beep(936,500);
	Beep(254,500);
	return 0;
}
