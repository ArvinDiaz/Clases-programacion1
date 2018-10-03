 /*Hecho por: Arvin Duvalier Diaz Amaya
 Carnet: DA18008
 Cacular el descuento en la compra de sacos de cafe aplicando:
 el descuento de 10% si la compra es mayor a 100,
 si es mayor a 200 se le hace un descuento de 15%, 
 si es mayor a 250 y menor 300 se le hace el descuento de 20%,
 si es mayor o igual a 300 se descuenta el 25%.
*/
#include<iostream>//operaciones de entrada y salida
#include<math.h>//hacer operaciones matematicas
#include<conio.h>// para nuemros decimales

using namespace std;

int main(){
	////declaracion de las variables que se usaran
	int saldoFinal;
	int Sacos;
	
	// Iniciando con un saludo al usuario 
	// Se hace interrogante de lo que desea hacer el usuario
	cout<<"Bienvenido"<<endl;
	cout<<"Si desea realizar una compra."<<endl;
	cout<<"Por favor, Ingrese la cantidad:"<<endl;
	cin>>sacos;
	
   // Aplicando condiciones en caso de las diferentes ofertas
    
	if (sacos > 100 && sacos <= 200)// condicional si b es mayor a 100 se descuenta el 10%
	{
		//formula para el descuento junto con el iva
		saldoFinal = (sacos * 100) + ((sacos * 100)*0.13) - ((sacos * 100)*0.10);
	}
	else if(sacos > 200 && sacos<= 250){//condicional si b es 200 se decuenta el 15%
		saldoFinal = (sacos * 100) + ((sacos * 100)*0.13) - ((sacos * 100)*0.15);//formula para sacar el descuento y el iva
	}
	else if(sacos > 250<300){//condicional si b es mayor a 250 y menor que 300 se descuenta el 20%
		saldoFinal = (sacos * 100) + ((sacos * 100)*0.13) - ((sacos * 100)*0.20);//fromula para sacar el descuento y el iva
	}
	else if(b >= 300){//condicional si b es mayor o igual a 300 se descuenta el 25%
		saldoFinal = (sacos * 100) + ((sacos * 100)*0.13) - ((sacos * 100)*0.25);////fromula para sacar el descuento y el iva
	}
	cout<<saldo final;//imprime en la pantalla la respuesta
	cout<<"Gracias por su compra"<<endl;//impresion de gracias por su compra en pantalla
	return 0;
}


