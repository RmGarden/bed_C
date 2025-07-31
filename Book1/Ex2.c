//Programa que mostre a soma e média de dois valores inteiros pedidos ao utilizador.

#include <stdio.h>
#include <windows.h>


int main(int argc, char const *argv[])
{
    //Variables
    int n1,n2;
    float media;

    SetConsoleOutputCP(CP_UTF8);
    //Input
    printf("Insira o primeiro valor: ");
    scanf("%d",&n1);
    printf("Insira o segundo valor: ");
    scanf("%d",&n2);

    //Math
    media= (n1+n2)/2;
    //Output
    printf("\nSoma: %d + %d = %d",n1,n2,n1+n2);
    printf("\nMédia: (%d + %d) / 2 = %.2f",n1,n2,media);

    return 0;
}
