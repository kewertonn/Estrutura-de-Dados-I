/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

/*Questão 8*/

void trocar(int *x, int *y) {
    int aux = *x;
    *x = *y;
    *y = aux;
}

int main() {
    int i, j;

    printf("Insira o primeiro valor: ");
    scanf("%d", &i);
    
    printf("Insira o segundo valor: ");
    scanf("%d", &j);
    
    printf("Valores:\ni = %d \nj = %d\n", i, j);

    trocar(&i, &j);

    printf("Valores apos troca:\ni = %d \nj = %d\n", i, j);

    return 0;
}
