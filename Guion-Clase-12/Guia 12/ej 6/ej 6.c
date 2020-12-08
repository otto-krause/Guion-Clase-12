#include <stdio.h>
#include <stdlib.h>

	float oct(float n);

	int main() {
	float n=0,res;
	printf(" Ingrese un numero ");
	scanf("%f",&n);
	res=oct(n);
	printf(" La octava parte de %.2f es %.2f ",n,res);
	}

	float oct (float n){
		return n/8;
	}
