#include <stdio.h>
#include <stdlib.h>

	int main( ) 
	{
	int n1,n2;
	//n1 = ing1();
	//n2= ing2();
	printf("El primer numero ingresado fue %d, el segundo fue %d ", ing1(), ing2());//Si no se necesita el valor se puede utilizar así.
	return 0;
	}

	int ing1()
	{
		int num;
		printf("Ingrese un numero ");
		scanf("%d",&num);
		return num;
	}

	int ing2(){
		int mum;
		printf("Ingrese un numero ");
		scanf("%d",&mum);
		return mum;
	}
