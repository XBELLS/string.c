/******************************************************************************

strings

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    printf("Função STRLEN calcula quantas letras tem a string. \n");
    char nome[50];
    printf("Digite seu nome: \n");
    gets(nome);
    printf("Seu nome tem %d letras \n", strlen(nome));
    
    printf("Função STRCPY copia a string em outra string. \n");
    char nome1[50], nome2[50];
    printf("Seu nome?");
    gets(nome1);
    strcpy(nome2, nome1);
    printf("Nome 2 copiado: %s", nome2);
    
    

    return 0;
}
