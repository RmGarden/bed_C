//Programa que pede um valor ao utilizador e mostra o seu sucessor e antecessor.

#include <stdio.h>

int main(int argc, char const *argv[])
{
    //Variables
    int val;
    
    //Input
    printf("Insira um valor: ");
    scanf(" %d",&val);

    //Output
    printf("\nValor Antecessor: %d",val-1);
    printf("\nValor inserido: %d",val);
    printf("\nValor sucessor: %d",val+1);
    
    return 0;
}
