/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int vetor1[5];
    int vetor2[5];
    int vetor3[5];
    int i;
    for(i=0 ; i<5;i++){
        printf("Digite um número para o Vetor 1: ");
       
        scanf("%d", &vetor1[i]);
        
    }
    for(i=0 ; i<5;i++){
        
        printf("Digite um número para o Vetor 2: ");
        
        scanf("%d", &vetor2[i]);
    }
    for(i=0 ; i<5;i++){
        vetor3[i]=vetor1[i]+vetor2[i];
        
    }
    printf("\n Vetor1: ");
    for(i=0 ; i<5;i++){
        printf("%d ",vetor1[i]);
        
    }
    printf("\n Vetor2: ");
    for(i=0 ; i<5;i++){
        printf("%d ",vetor2[i]);
        
    }
    printf("\n Vetor3: ");
    for(i=0 ; i<5;i++){
        printf("%d ",vetor3[i]);
        
    }
    
    
    return 0;
}
