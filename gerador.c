#include <stdio.h>

void gerarTabuada(int numero){
    for(int i = 1; i <= 10; i++){
        printf("%d x %d = %d\n", numero, i, numero * i);
    }
}

int main(){
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    gerarTabuada(numero);

    FILE *arquivo;
    arquivo = fopen("tabuada.txt", "w");

    if(arquivo == NULL){
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    for(int i = 1; i <= 10; i++){
        fprintf(arquivo, "%d x %d = %d\n", numero, i, numero * i);
    }

    fclose(arquivo);

    printf("\nArquivo criado com sucesso!\n");

    return 0;
}