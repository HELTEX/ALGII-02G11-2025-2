#include <stdio.h>

int main () {
    float taxa;
    printf("Digite a taxa para a correspondência em centavos: ");
    scanf("%f", &taxa);
    if (taxa < 8) {
        printf("A taxa mínima é de R$ 0,08");
        return 0;
    } else {
        int selos_5 = 0, selos_3 = 0;
        selos_5 = (int) (taxa / 5);
        while (selos_5 >= 0) {
            float resto = taxa - (selos_5 * 5);
            if ((int) resto % 3 == 0) {
                selos_3 = (int) (resto / 3);
                printf("%.0f centavos: %d selos de 3 e %d selos de 5\n", taxa, selos_3, selos_5);
                return 0;
            }
            selos_5--;
        }
    }

}