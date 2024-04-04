/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

/*Questão 4*/

int main()
{
    float maior, matriz[10][10];
    int i = 0, j = 0, linha = 0, coluna = 0;
    
    for(i=0; i<10; i++){
        for(j=0; j<10; j++){
            printf("Coluna %d da Linha %d: ", j, i);
            scanf("%f", &matriz[i][j]);
        }
    }
    
    maior = matriz[0][0];
    
    for(i=0; i<10; i++){
        for(j=0; j<10; j++){
            if(matriz[i][j]>maior){
                maior = matriz[i][j];
                linha = i;
                coluna = j;
            }
        }
    }
    
    printf("O maior valor eh %f. (Linha: %d e Coluna: %d)\n", maior, linha, coluna);

    return 0;
}