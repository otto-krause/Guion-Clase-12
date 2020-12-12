#include <stdlib.h>
#include <stdio.h>

int ing1();
int ing2();

int ing1()
{
    int num;
    printf("Ingrese un numero\n");
    scanf("%d", &num);

    return num;
}
int ing2()
{
    int mum;
    printf("Ingrese otro numero\n");
    scanf("%d", &mum);
    return mum;
}

int main()
{
    int num, mum;
    num = ing1();
    mum = ing2();
    system("cls");
    printf("Ingreso los numeros:\n");
    printf("%d\n", num);
    printf("%d", mum);
    return 0;
}
