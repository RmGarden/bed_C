# include <stdio.h>

int main(int argc, char const *argv[])
{
    char letra;
    int num;

    

    printf("Insira um numero: ");
    scanf("%d",&num);

    printf("Insira uma letra: ");
    scanf(" %c",&letra); // The space before the %c is to clear the buffer.
    
    printf("O numero inserido foi %d e a letra inserida foi %c\n",num,letra);

    return 0;
}
