/*Hecho por Arvin Duvalier Diaz Amaya
  Carnet: DA18008
Un programa que pida cinco notas y muestre
u promedio
*/
#include<cstdlib>
#include<iostream>//permite entrada y salida de datios
#include<windows.h> //para poner sonidos
//PRIMER EJERCICIO DE LA CLASE
/*using namespace std;
//cuerpo del programa
int main(int argc, char * argv[])
{
	/*para cambiar el color de letra y fondo, 
	el primr numero para el fondo y el segundo para las letras
	system("color 40");
	
	float notas [5];//declarar variable de nuemros decimales
	float suma=0;//delcaro la variable a usar
	float promedio;//la variable de la respuesta

	for (int i=0; i<= 4; i++)//ciclo for que hara la suma de notas
	{
		do{
		cout<<"Ingrese la nota " <<i+1<<endl;//indicacion para ingresar los datos
		cin>>notas[i];//el que guarda los datos
		}while(notas[i]<0 || notas[i]>10);
		suma=suma+notas[i];//acumula la sumatoria de notas
	} cout<<"sus notas son: "<<endl;
	for (int i=0; i<=4; i++)//cicclo para mostrar las cuatro notas
	{
		cout<<notas[i]<<endl;//
	}
	promedio= suma/5;//repuesta del promedio
	cout<<"El promedio es de: "<<promedio<<endl;//texto a mostrar antes de la respuesta
	Beep(266,500);//sonido
	Beep(984,500);//sonidos
	system("pause");//para que el programa no se cierre despues de ejecutarse
	return EXIT_SUCCESS;
}*/

/*SEGUNDO EJERCICIO DE LA CLASE
using namespace std;
int main()
{
for (int z=0;z<=9; z++)
	cout<<"tabla del:"<<z<<endl;
{	
	
	
	for (int i=0; i<= 10; i = i++)//ciclo para que sume de 10 en 10 hasta llegar a 100	
	{
	
	cout<< i <<"z"<<z<<"="<<i*z<< endl;//texto que se muestra antes de mostrar la respuesta

	}
}
	system("pause");//para que el programa no se cierre despues de ejecutarse
	return EXIT_SUCCESS;
}*/

//TERCER EJERCICIO DE LA CLASE
//calcular el factorial de un numero utilizando el ciclo for
using namespace std;
int factorial(int num);
{	int fact*i;
	for(int i=1; i<=num;i++)
	{
		fact = fact*1;
	}
	return fact;
}
	//cuerpo del programa
	int main(int argc,char *argv[])
{
	//declaro variables a usar
	int num;
	int fact=1;
	//muestro la indicicacion
	cout<< "Ingrese el numero: ";
	//guarda la respuesta de la indicacion
	cin>>num;
	//ciclo para que multiplique al valor ingresado 
	for(int i=1; i<=num;i++)
	{
		//operacion que se realizara
		fact= fact*i;
	}
	//muestra la el texto y la respuesta respuesta
	cout<<"la repuesta es: "<<fact<<endl;
	system("pause");//evita que el programa se cierre despues de terminar la operacion
	return EXIT_SUCCESS;//termina o cierra el programa
}
