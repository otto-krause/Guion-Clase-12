#include <stdio.h>
#include <stdlib.h>

	float presion(float fuerz, float sup);
	int main() {
	float sup=0,fuerz=0,resul=0;
	printf(" Ingrese la fuerza ");
	scanf("%f",&fuerz);
	printf(" Ingrese la superficie ");
	scanf("%f",&sup);
	resul=presion (fuerz,sup);
	printf("La presion es = %f ",resul);
	}

	float presion(float fuerz, float sup){
	return fuerz/sup;
	}
