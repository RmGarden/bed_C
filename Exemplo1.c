// Libraries
# include<stdio.h>  // To import the funtion printf
# include <windows.h> // To import the SetConsole funtion

// Main Function
int main ()
{
    // Variable types
    int a=12;
    float b=4.5;
    char c='s';

    //Text and printing
    printf("Olá Mundo!\n");
    SetConsoleOutputCP(CP_UTF8); // To correctly print 'á'
    printf("Olá Mundo!\n");
    printf("Hello World!\n");

    //Concatenation
    printf("\n\nO valor de A é %d. \nO valor de B é %.2f. \nO valor de C é %c.", a,b,c);

     
    return 0;
}
