// Programa que calcule o volume de um cilindro, a partir valor do raio da base e da altura em metros, 
// a serem fornecidos pelo utilizador (números reais). O resultado deve ser apresentado com três casas decimais.
// Nota: para valor de PI utilize uma variável float com valor 3.1415.

#include <stdio.h>
#include <windows.h>

int main(int argc, char const *argv[])
{
    //Variables
    float vol, r,h,pi=3.1415;
    SetConsoleOutputCP(CP_UTF8);

    //Input
    printf("Insira o raio da base: ");
    scanf("%f",&r);

    printf("Insira a altura: ");
    scanf("%f",&h);

    //Math
    vol=(pi*(r*r))*h;

    //Output
    printf("O volume do cilindro é %.3f",vol);

    return 0;
}
