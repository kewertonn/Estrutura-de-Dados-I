/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>

/*Questão 5*/

int main()
{
    struct banda{
        char nome[15];
        char tipo_musica[15];
        int n_integrantes;
        int ranking;
    };
    
    struct banda bandas[5];
    int i;
    
    strcpy (bandas[0].nome, "AC/DC");
    strcpy (bandas[0].tipo_musica, "Rock");
    bandas[0].n_integrantes = 5;
    bandas[0].ranking = 5;
    
    strcpy (bandas[1].nome, "Pink Floyd");
    strcpy (bandas[1].tipo_musica, "Rock");
    bandas[1].n_integrantes = 4;
    bandas[1].ranking = 4;
    
    strcpy (bandas[2].nome, "Queen");
    strcpy (bandas[2].tipo_musica, "Rock");
    bandas[2].n_integrantes = 4;
    bandas[2].ranking = 3;
    
    strcpy (bandas[3].nome, "Led Zeppelin");
    strcpy (bandas[3].tipo_musica, "Rock");
    bandas[3].n_integrantes = 4;
    bandas[3].ranking = 2;
    
    strcpy (bandas[4].nome, "The Beatles");
    strcpy (bandas[4].tipo_musica, "Rock");
    bandas[4].n_integrantes = 4;
    bandas[4].ranking = 1;
    
    for(i=0;i<5;i++){
        printf("Nome da banda: %s \n", bandas[i].nome);
        printf("Tipo de musica: %s \n", bandas[i].tipo_musica);
        printf("Nome da banda: %d \n", bandas[i].n_integrantes);
        printf("Nome da banda: %d \n", bandas[i].ranking);
        printf("\n");
    };

    return 0;
}