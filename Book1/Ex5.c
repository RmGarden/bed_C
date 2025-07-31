//Programa que calcula o salário liquido de um funcionário. São fornecidos o valor hora, número de horas de trabalho. 
//Deverá ser criada uma constante para guardar a percentagem de desconto que é de 14%

#include <stdio.h>
#include <windows.h>

int main(int argc, char const *argv[])
{
    //Variables
    float sal,vh,th,desconto=0.14;
    SetConsoleOutputCP(CP_UTF8);

    //Input
    printf("Insira o valor hora: ");
    scanf("%f",&vh);
    printf("Insira número de horas: ");
    scanf("%f",&th);

    //Math
    sal=vh*th;

    //Output
    printf("\nSalário Bruto: %.3f €",sal);
    printf("\nDesconto: %.2f %%",desconto*100);
    printf("\nSalário liquido: %.3f €",sal*(1-desconto));

    return 0;
}
