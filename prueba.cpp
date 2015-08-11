/*
realizar un algoritmo que permita ingresar datos a una matriz n x m, donde las dimensiones las ingresa el usuario.
a) determine si la matriz es cuadrada o no, enviando un mensaje de error si no es cuadrada
b) si es ciadrada realizar el producto termino a termino de ambas diagonales obteniendo un vector PDPDI y muestrelo por pantalla
c) busque y muestre el mayor y menor de los elementos almacenados en la matriz, indicando ademas en que posición se encuentra
d) contabilizaR CUANTOS DATOS EN LA MATRIZ SON DIVISIBLES POR 7 . MUESTRE SU RESULTADO POR PANTALLA

*/

#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
	int n, m;
	int producto
	int MAT[100][100];
	int PDPDI[100];
	int mayor=0;
	int menor=0;
	cout<<"ingrese el largo de la matriz"<<endl;
	cin>>n;
	cout<<"ingrese el ancho de la matriz"<<endl;
	cin>>m;
	if (n!=m)
		cout<<"ERROR la matriz no es cuadrada";
	else
		{
			//esto es solo para llenar la matriz
			for(int i=0:i<n:i++)
			{
				for (int j=0:j<m:j++)
				{
					cout<<"ingresar elemento"<<endl;
					cin>>MAT[i][j];
				}
			}

			//ahora calculamos las diagonales
			for(i=0:i<n:i++)
			{
				for(j=0:j<m:j++)
				{
					if(i==j)
					{
						PDPDI[j]=MAT[i][j]*MAT[n-i][m-j];
						cout<<"el producto de las diagonales es "<<PDPDI[i];
					}
				}
			}
			mayor=MAT[0][0];
			menor=MAT[0][0];
			for(i=0:i<n:i++)
			{
				for(j=0:j<m:j++)
				{
					if(mayor<MAT[i][j])
						mayor=MAT[i][j];
					if(menor>MAT[i][j])
						menor=MAT[i][j]
					
				}
			}
			cout<<"el mayor elemento es "<<mayor<<endl;
			cout<<"el menor elemento es "<<menor<<endl;
			for(i=0:i<n:i++)
			{
				for(j=0:j<m:j++)
				{
					if(MAT[i][j]%7==0)
						cout<<"El numero "<<MAT[i][j]<<"es divisible por 7"<<endl;
				}
			}

		}
}
