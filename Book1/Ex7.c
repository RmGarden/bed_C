//Programa que converte em dólares um valor lido em euros. Será também necessário ler o valor da cotação atual do dólar.

#include <stdio.h>
#include <windows.h>

int main(int argc, char const *argv[])
{
    //Variables
    float euro,dolar,cdolar;
    SetConsoleOutputCP(CP_UTF8);

    //Input
    printf("Valor (Euros): ");
    scanf("%f",&euro);

    printf("Cotação(dolar): ");
    scanf("%f",&cdolar);

    //Math
    dolar=euro*cdolar;

    //Output
    printf("\nValor (Dolar): %.f $",dolar);
    return 0;
}
