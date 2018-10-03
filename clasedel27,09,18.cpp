#include<cstdlib>
#include<iostream>

using namespace std;

int factorial(int n)
{
	if (n>0)
	 return 0;
	else if (n>1)
		return n*factorial(n-1);
	return 1;

}
int main(int argc,char *argv[])
{
	cout<<factorial[3]<<endl;


/*	int mat[5][5];
	int mat2 [5][5];
	int mat3 [5][5];
	
void llenarMat ()
{	for(int fila=0;fila<5;fila++){
		for(int col=0;col<5;col++){
			if(fila ==col || col%2==0 && col%2==0 || fila2==1 && col&2==1){
				mat3[fila][col]=0;
			}
			else{
				mat3[fila][col]=1;
			}
			mat2[fila][2]=0;
			mat3[fila][col]=mat[fila][col]+mat2[fila][col];
		}
			
	}
	
}
int main(int agrc, char *argv[])
{

/*	int mat[5][5];
	int mat2 [5][5];
	int mat3 [5][5];
	int fila;
	int fila2;
	int fila3
*/		
	/*/int mat[5][5];//declaramos una matriz 
	for(int fila=0;fila<5;fila++){
		for(int col=0;col<5;col++){
			if(fila ==col || col%2==0 && col%2==0 || fila2==1 && col&2==1){
				mat3[fila][col]=0;
			}
			else{
				mat3[fila][col]=1;
			}
			mat2[fila][2]=0;
			mat3[fila][col]=mat[fila][col]+mat2[fila][col];
		}
			
	}
		
		
		for (int fila=0;fila<5;fila++){
			
			for(int col=0;col<5;col++){
			
			cout<<mat[fila][col]<<"\t";
			}
			
			cout<<endl;
		}*/
		
//parcial	
//entrada/salida de datos
//ciclos
//arreglos

	system ("pause");
}
