# include <stdio.h>
# include <stdlib.h>
# include <time.h>

int main() 
{
    srand(time(NULL));
    int computador = (rand() % 3) + 1;
    int usuario;
    printf("Pedra, Papel ou Tesoura?\n");
    printf(" 1. Pedra\n 2. Papel\n 3. Tesoura \n");
    scanf("%d", &usuario);
    printf("Computador: %d\n", computador);
    if (usuario == 1 && computador == 3) {
        printf("Usuário venceu!\n");
    }
    else if (usuario == 3 && computador == 2) {
        printf("Usuário venceu!\n");
    }
    else if (usuario == 2 && computador == 1) {
        printf("Usuário venceu!\n");
    }
    else if (usuario == computador) {
        printf("Empate\n");
    }
    else {
        printf("Computador venceu!\n");
    }
    return 0;
}