#include <stdlib.h>
#include <string.h>

int main()
{
    printf("************Função STRCAT copia str2 no final da str1************");
    char nome[] = "João", snome[] = "Siqueira";
    strcat(nome, snome);
    
    printf("************Função STRCMP compara se as strings sao iguais.************ \n");
    char name1[] = "João";
    char name2[] = "João";
    
    if(name1 == name2){
        printf("São iguais\n");
    }else{
        printf("São diferentes\n");
    }
    printf("ESSE IF VERIFICA SE O ENDEREÇO DE MEMÓRIA SÃO IGUAIS\n");
    printf("NÃO O CONTEÚDO EM SI. \n");
    
    if(strcmp(name1, name2)==0){
        printf("São iguais. \n");
    }else{
        printf("São diferentes. \n");
    }
    
    printf("COM O USO DO STRCMP VERIFICA SE SAO IGUAIS LEXICOGRAFICAMENTE.\n");
    

    return 0;
}
