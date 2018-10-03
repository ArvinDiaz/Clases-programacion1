//posicion x
#include<cstdlib>
#include<iostream>
#include<math.h>
/*PRIMER EJERCICIO
using namespace std;
float sumar(float *x, float *y);
void pedirNumeros();

int main()
{
	pedirNumeros();

	return 0;
}
void pedirNumeros()
{	float x;
	float y;
	float res;
	
	cout<<"ingrese un numero"<<endl;
	cin>>x;
	cout<<"ingrese un numero"<<endl;
	cin>>y;
	cout<< &x << endl << endl << &y << endl;
	res=sumar(&x,&y);
	cout<<"el resultado es"<<res<<endl;
	
	
}
float sumar(float *x, float *y)
{
	return *x+*y;
}*/

using namespace std;

int main (int argc,char *argv[])
{	int x [4][4];
	
	for (int i=0;i<=3;i++)
	{
		for(int j=0; j<=3;j++)
		{
			x[i][j]=0;
		}
	}
	for(int i; i<3; i++)
	{
	x[0][1]=3;
		if (i = 3)
		{
			x[3][2]=3;
			x[3][3]=3;
		}
	}
	cout<< x << endl;
	
	system ("pause");
	
	return 0;
}
