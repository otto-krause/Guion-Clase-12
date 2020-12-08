#include <stdio.h>
#include <stdlib.h>

	void teca ();

	int main() {
	int n,n1;
	printf(" Ingrese un numero : ");
	scanf("%d",&n);
	printf(" Ingrese otro numero : ");
	scanf("%d",&n1);
	teca(n,n1);
	}

	void teca(int n, int n1){
		if (n>n1) {
			printf(" %d Es mayor que %d ",n,n1);
		}else if(n1>n){
			printf(" %d Es mayor que %d ",n1,n);
		} else{
			printf(" %d Es igual que %d ",n,n1);
		}

	}
