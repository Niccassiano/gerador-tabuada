#include <stdio.h>

void gerarTabuada(int numero) {
    for(int i = 1; i <= 10; i++){
        printf("%d x %d = %d\n", numero, i, numero * i);
    }
}

int main (){
    
    // primeiro a tabuada:
    
    int numero;
    
    printf("Digite a tabuada que deseja:\n");
    scanf("%d", &numero);

    gerarTabuada(numero);
    

    // for(i = 1; i <= 10; i++){
        // printf("%d * %d = %d\n", numero, i, i * numero);
   //  }
    
    return 0;
}