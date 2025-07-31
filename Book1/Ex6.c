//Programa que calcule e apresente o número total de segundos, a partir de um tempo 
//decorrido no formato hh:mm:ss, a ser fornecido pelo utilizador.

#include <stdio.h>


int main(int argc, char const *argv[])
{
    //Variables
    int h,m,s;
    float ts;

    //Input
    printf("Inserir horas(hh:mm:ss): ");
    scanf(" %d: %d: %d",&h,&m,&s);

    //Math
    ts=(h*3600)+(m*60)+s;

    //Output
    printf("\nTotal segundos: %.f",ts);

    return 0;
}
