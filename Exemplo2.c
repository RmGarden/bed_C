//Programa que calcula a área do retangulo (area=b*h)

# include <stdio.h>
# include <math.h>
# include <windows.h>

int main(int argc, char const *argv[])
{
    float area, b,h;

    SetConsoleOutputCP(CP_UTF8); // To correctly print 'á'
    //Input da base
    printf("Insira a base do triângulo: ");
    scanf("%f",&b);
    //Input da altura
    printf("Insira a altura do triângulo: ");
    scanf("%f",&h);

    //Mostrar resultado
    area=b*h;
    printf("\nA área do retângulo é: %.2f",area);

    return 0;
}
