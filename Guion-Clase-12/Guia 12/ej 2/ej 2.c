#include <stdio.h>
#include <stdlib.h>
int area(int n1, int n2);
int perimetro(int n1, int n2);
	//Cuidado con las llaves y tabulaciones.
	//Faltan declaraciones de funcioes.
	int main()
{
	int n1 = 0, n2 = 0, resul = 0, res1, res2;
	printf(" Ingrese un numero ");
	scanf("%d", &n1);
	printf(" Ingrese otro numero ");
	scanf("%d", &n2);
	res1 = area(n1, n2);
	res2 = perimetro(n1, n2);
	printf(" El area es %d", res1);
	printf(" El perimetro es %d ", res2);

		}

	int area(int n1, int n2)
	{
		int ar=0;
		ar=n1*n2;
		return ar;
	}

	int perimetro(int n1, int n2)
	{
		int per=0;
		per=(2*n1)+(2*n2);
		return per;
	}
