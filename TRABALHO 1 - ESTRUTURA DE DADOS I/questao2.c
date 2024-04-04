/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

/* Questão 2*/

int main()
{
    int i, N = 0, flag = 1;
    
    do{
    printf("Insira o tamanho do vetor: ");
    scanf("%i", &N);
    }while (N<=0);
    
    int vetor[N];
    
    for(i=0; i<N; i++){
        printf("Insira o %iº elemento: ", i+1);
        scanf("%i", &vetor[i]);
    }
    
    
    if(N == 1){
        printf("\nVetor contem apenas 1 elemento.\n");
        return 0;
    }
    
    for(i=0;i<N;i++){
        if((i+1) == N){
            flag = 1;
        }else{ 
            if(vetor[i] <= vetor[i+1]){
                flag = 1;
            }else
                flag = 0;
        }
        
        if(flag == 0){
            printf("\nNAO\n");
            return 0;
        }
    }
    
    if(flag == 1){
        printf("\nSIM\n");
    }
    
    return 0;
}
