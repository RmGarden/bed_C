// Libraries
# include<stdio.h>  // To import the funtion printf
# include <windows.h> // To import the SetConsole funtion

// Main Function
int main ()
{
    // Variable types
    int a=12, x=5, y, numero;
    float b=4.5;
    char c='s';

    //Text and printing
    printf("Olá Mundo!\n");
    SetConsoleOutputCP(CP_UTF8); // To correctly print 'á'
    printf("Olá Mundo!\n");
    printf("Hello World!\n");

    //Concatenation
    printf("\n\nO valor de A é %d. \nO valor de B é %.2f. \nO valor de C é %c.", a,b,c);

    //Incrementos
    y=x++; // Primeiro atribui e depois incrementa y=5 x=6
    printf("\n\nValor x= %d e o valor de y = %d\n",x,y);

    y=++x; // Primeiro incrementa e depois atribui x=7 y=7
    printf("valor x = %d e o valor de y = %d",x,y);

    //Ask for user input
    printf("\n\nInsira um valor: ");
    scanf("%d",&numero);
    printf("\nO valor inserido foi: %d",numero);

     
    return 0;
}
