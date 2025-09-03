#include <stdio.h>

int calcularMediaTurma (float notas[], int n){
    float soma = 0.0;
    for (int i = 0; i < n; i++){
        soma += notas[i];
    }
    return soma / n;
}
void imprimirResultados (float notas[], int n){
    for (int i = 0; i < n; i++){
        if (notas[i] >= 7.0){
            printf("%d Aprovado - Nota: %.2f\n", i, notas[i]);
        } else {
            printf("%d Recuperação - Nota: %.2f\n", i, notas[i]);
        }
    }
    
}
int main(){
    int n;
    printf("Digite o número de estudantes: "); //solicita ao usuário o número de estudantes
    scanf("%d", &n); //guarda na variável n o número de estudantes digitado pelo usuário

    float notas[n]; //cria o vetor de notas

    for (int i = 0; i < n; i++){
        printf("Nota [%d]: ", i + 1);
        scanf("%f", &notas[i]);
    }
    float mediaTurma = calcularMediaTurma(notas, n); //chamada da função calcularMediaTurma
    printf("\nMédia da turma: %.2f\n", mediaTurma);

    printf("\nResultados dos estudantes:\n");
    imprimirResultados(notas, n); //chamada da função imprimirResultados
    return 0;
}