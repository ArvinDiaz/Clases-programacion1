/* Arvin Duvalier Diaz Amaya
   Carnet: DA18008
   
   ATENCION:: PONER EL ARCHIVO EN UNA CARPETA PARA HACER MENOS DIFICL LA BUSQUEDA DEL ARCHIVO .TXT
   -hacer un programa utliando funciones que permita resolver los siguientes ejercicios
   Opciones: 
   1- fibonacci.
   2- series de tailor.
   3- ver resultados.
   4- salir.
*/
#include <iostream>//contiene los algoritmos estandar
#include <conio.h>//libreria que se utiliza en la serie de taylor,	
#include <stdio.h>//libreria para 
#include <stdlib.h>//contine prototipos de funciones,macros y tipos para unidades de uso general
#include <math.h>//para el uso de funciones matematicas
#include<fstream>//para que guarde los resultados en archivo.txt

using namespace std;
//declaracion de las variables para el menu
enum eOpt { oERROR=-1, oINICIO, oTAYLOR, oFIBONACCI, oVERRESULT, oSALIR, oTOTAL };
//lo que guarda cada una de las opciones
char stmp[100];
//declaracion de las funciones Fibonacci y Taylor
void FuncionTaylor();
int fibonacci();

double ans = 0;
int nextTerm = 0;
int n;
int mynum = 0;

int main()
{
	string proble;
	int tr = 0;
int opt = 0;
//declaracion dek menu
do
{

system( "cls" );

cout<<( "========== MENU ==========\n" );
cout<<( "1- Serie de Taylor\n");
cout<<( "2 - Fibonacci\n");
cout<<( "3 - Ver Resultados\n");
cout<<( "4 - Salir\n" );
cout<<( "**\n" );
cout<<( "Ingresa tu opcion : " ); gets( stmp );
opt = atoi(stmp);

if ( opt <= oINICIO || opt >= oTOTAL )	//verificando opciones validas
{
	opt = oERROR;
}

switch ( opt )
{
//declaracion del taylor en el case para que funcione en el menu
case oTAYLOR :
proble = "taylor";
tr = 1;
FuncionTaylor();
break;
case oFIBONACCI:
tr = 2;
proble = "fibonacci";
fibonacci();
break;
case oVERRESULT:
cout<<"Dato del Taylor: \n"<< mynum << endl;
cout<<"Resultados del taylor: \n" << ans << endl;
cout<<"Dato del fibonacci: \n" << n << endl;
cout<<"Resultados del fibonacci: \n" << nextTerm << endl;
system("pause");
break;
case oERROR :
cout<<( "%&#$#% ingresa una de las opciones correctas..\n\n" );
cout<<( "***PRESIONA <ENTER> PARA CONTINUAR" ); getchar();
break;
};

if(tr == 1 || tr == 2)
{

ofstream myfile;
	myfile.open ("Registro.txt",ios::out | ios::app);
	myfile <<  "Registro" << "\t" << proble << "\t";
	
	if( opt == oTAYLOR ){
		myfile << mynum << "\t" << ans << endl;
	}
	else if(opt == oFIBONACCI){
		myfile << n << "\t" << nextTerm << endl;
	}
	
	myfile.close();	
}
    system("pause");           
tr = 0;
}while ( opt != oSALIR );

return 0;
}

//SERIES DE TAYLOR
//se especifica las operaciones que se realizaraan en el Taylor
void FuncionTaylor()
{

//S=1+x+((x^2)/2!)+((x^3)/3!)+((x^4)/4!)+...

cout<<( "cls" );
cout<<( "========== Serie de Taylor ==========\n" );
cout<<( "Ingresa un numero : " ); gets( stmp );
mynum = atoi(stmp);//guarda el numero de la opcion taylor

//si el numero es malo es igual a cero
if ( mynum <= 0 )
{
cout<<( " ERROR!!..\n");
cout<<( "%s no es ha sido valido..\n\n");
cout<<( "***PRESIONA <ENTER> PARA CONTINUAR" ); getchar();

return;
}

double mydoble = 0;
double myfact = 1;
//se utiliza para hacer la 
ans = 1 + mynum;
for ( int i=2; i<mynum; i++ )
{
mydoble = pow( (double) mynum, (double)i );
myfact = 1;
for ( int j=1; j<=i; j++ )
myfact *= j;

ans = ans + ( mydoble / myfact );//muestra la respuesta del taylor
}

cout<<( "**\n" );
cout<<( "El resultado es : %0.4f\n\n", ans );
cout<<( "***PRESIONA <ENTER> PARA CONTINUAR" ); getchar();

}


//CODIGO FIBONACCI
//declaracion para el uso del codigo Fibonacci
int fibonacci()
{
    int t1 = 0;
	int t2 = 1;
	
    cout << "Enter a positive number: ";
    cin >> n;//dato que se ingre sa en el fibonacci
	
	//muestra los primeros dos terminos que siempre son 0 y 1
    cout << "Fibonacci Series: " << t1 << ", " << t2 << ", ";

    nextTerm = t1 + t2;

    while(nextTerm <= n)
    {
        cout << nextTerm << ", ";
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;//dato a poner en la variable mostrar datos
    }
    nextTerm = t1;

}

/* Enlaces de donde saque info de los codigos

https://www.programiz.com/cpp-programming/examples/fibonacci-series
https://programacion.net/foros/c-c-plus/serie_de_taylor_343408
https://www.youtube.com/watch?v=v9ZZUa3eOEM
*/
