//Programa que pede o preço de um produto. Como o produto tem um desconto de 10% o programa mostra 
//o valor do desconto e o preço final do produto. O preço poderá ir ao cêntimo.

#include <stdio.h>
#include <windows.h>

int main(int argc, char const *argv[])
{
    //Variables
    float preco,desconto=0.1,pfinal;

    SetConsoleOutputCP(CP_UTF8);
    //Input
    printf("Insira o preço do produto: ");
    scanf("%f",&preco);

    //Math
    pfinal=preco*(1-desconto);

    //Output
    printf("\nPreço do produto: %.2f €",preco);
    printf("\nDesconto: %.2f %%",desconto*100);
    printf("\nPreço final: %.2f €",pfinal);

    return 0;
}
