#include <stdio.h>

int main (){
    
    // primeiro a tabuada:
    
    int numero, i;
    
    printf("Digite a tabuada que deseja:\n");
    scanf("%d", &numero);
    
    for(i = 1; i <= 10; i++){
        printf("%d * %d = %d\n", numero, i, i * numero);
    }
    
    return 0;
}