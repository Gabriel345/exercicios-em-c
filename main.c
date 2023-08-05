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
    int vetor1[25];
    int vetor2[25];
    int vetor3[25];
    int i;
    srand(time(NULL));
    for(i=0 ; i<25;i++){
        vetor1[i]= rand() % 100;
        vetor2[i]= rand() % 100;
    }
    for(i=0 ; i<25;i++){
        vetor3[i]=vetor1[i]+vetor2[i];
        
    }
    printf("\n Vetor1: ");
    for(i=0 ; i<25;i++){
        printf("%d ",vetor1[i]);
        
    }
    printf("\n Vetor2: ");
    for(i=0 ; i<25;i++){
        printf("%d ",vetor2[i]);
        
    }
    printf("\n Vetor3: ");
    for(i=0 ; i<25;i++){
        printf("%d ",vetor3[i]);
        
    }
    
    
    return 0;
}
