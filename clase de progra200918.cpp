/*Arvin Duvalier DIaz Amaya
Carnet: Da18008
hacer un programa que permita calcular la suma de dos numeros
o hasta cuatro numeros utilizando funciones 
*/
#include<iostream>//libreria para operaciones de sumar o restar

using namespace std;
//cuerpo del programa
void l();//declaracion de la funcion no retorna nada/ no recive parametros
int sumar(int a, int aux);
int pedirNumSumar();
int main(int argc, char *argv[])
{	int n=1;//contador
	int vn = pedirNumSumar();//su valor cambiara de 2-4
	int suma=0;//acumulador
	int aux;//intercambio de valores temporales
	
	while(n <= vn){//condicion para sumar solo los numeros que el usuario desee
		l();//llamada del la funcion
		cout<<"ingrese el numero: "<<n<<endl;
		cin>>aux;//3
		suma = sumar(suma,aux);//3
		n++;//2
	}
	
	l();//llamada del la funcion
	cout << "La suma es de: "<<suma<<endl;
	system("pause");
	cout<<("Desarrollado por: A la verga perro me vale verga")<<endl;
	cout<<("Universidadd ")<<endl;
	cout<<("version")<<sumar (1,2)<<endl;
	system ("pause");

}

void l(){//implementacion de la funcion
system("cls");
cout << "----------------------------------------"<<endl;
cout << "----------------------------------------"<<endl;
}

int sumar (int a, int aux)
{	
	return a+aux;
}

int pedirNumSumar(){

	int vn;
	do 
	{
		l();
		cout << "Cuantos numeros quiere sumar(2-4) ";
		cin>>vn;
	}
	while(vn<2 || vn>4);
	return vn;
}





//TAREA 2 DE PROGRAMACION
//PRIMER EJERCICIO DE TAREA
/*Una empresa de telefonia neceita calcular el total apagar por cada cliente 
segun la siguiente tabla de 
1-10 min de llamada se pagan 0.05$
11- a 15 min son 0.11$
mas de 15 min se pagan 0.10 $
haga un programa que calule el total apagar por cada llamada implementando ciclos y funciones




//SEGUNDO EJERCICIO:UTILIZANDO FUNCIONES Y TRABAJAR MAS LAS VALIDACIONES
- Una empresa necesita calcular la produccion diaria de bebidas y los insumos requeridos
para la elavoracion de refresco de acuerdo a la suguiente tabla
*		agua	azucar
 soda   500ml   800g
 jugo   600ml   700g
 hacer un programa que permita ingresar la produccion diaria y muestre en panalla los 
 insumos requeridos 
 
 CORREO: tareasuesfmo@gmail.com*/
